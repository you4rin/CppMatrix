#include<vector>
#include<complex>
/*
������ �����ؾ� �ϴ°�?
1. ���� ������(Ư�� ������ ���, �ð����⵵ O(N^2.3)�� ��� ã�ƺ����� ����)
2. Matrix���� ����ȯ(double ��Ʈ����+int ��Ʈ���������� ����)
3. factorization ����(LDU/QR/�밢ȭ ��)
4. ū ��(big integer) ����
*/
template<class T>
class Matrix{
	int h,w;
	std::vector<T> matrix;
public:
	//���� ����
	Matrix():h(1),w(1),matrix(std::vector<T>(1,0)){}
	//���ڷ� h�� w�� ����, 0���� �ʱ�ȭ
	Matrix(int h,int w):h(h),w(w),matrix(std::vector<T>(h*w,0)){}
	//Initializer_list�� �̿��� Matrix �ʱ�ȭ ���� �ʿ�
	//�Ϲ����� Matrix���� ���Կ���
	template<class U>
	Matrix<T>& operator=(const Matrix<U>& other){
		if(h!=other.h||w!=other.w){
			throw std::exception;
		}
		for(int i=0;i<h*w;++i){
			matrix[i]=other.matrix[i];
		}
		return *this;
	}

	template<class U>
	Matrix<T>& operator=(Matrix<U>&& other){
		if(h!=other.h||w!=other.w){
			throw std::exception;
		}
		for(int i=0;i<h*w;++i){
			matrix[i]=other.matrix[i];
		}
		return *this;
	}

	//�Ϲ����� Matrix���� ����
	template<class U>
	Matrix<T> operator+(const Matrix<U>& other){
		if(h!=other.h||w!=other.w){
			throw std::exception;
		}
		Matrix<T> mat(h,w);
		for(int i=0;i<h*w;++i){
			mat.matrix[i]=matrix[i]+other.matrix[i];
		}
		return mat;
	}

	template<class U>
	Matrix<T> operator+(Matrix<U>&& other){
		if(h!=other.h||w!=other.w){
			throw std::exception;
		}
		Matrix<T> mat(h,w);
		for(int i=0;i<h*w;++i){
			mat.matrix[i]=matrix[i]+other.matrix[i];
		}
		return mat;
	}

	//�Ϲ����� Matrix���� ����
	template<class U>
	Matrix<T> operator-(const Matrix<U>& other){
		if(h!=other.h||w!=other.w){
			throw std::exception;
		}
		Matrix<T> mat(h,w);
		for(int i=0;i<h*w;++i){
			mat.matrix[i]=matrix[i]-other.matrix[i];
		}
		return mat;
	}

	template<class U>
	Matrix<T> operator-(Matrix<U>&& other){
		if(h!=other.h||w!=other.w){
			throw std::exception;
		}
		Matrix<T> mat(h,w);
		for(int i=0;i<h*w;++i){
			mat.matrix[i]=matrix[i]-other.matrix[i];
		}
		return mat;
	}

	//�Ϲ����� Matrix���� ���� -> ���� ���� �ʿ�
	template<class U>
	Matrix<T> operator*(const Matrix<U>& other){
		if(w!=other.h){
			throw std::exception;
		}
	}

	template<class U>
	Matrix<T> operator*(Matrix<U>&& other){
		if(w!=other.h){
			throw std::exception;
		}
	}
};

template<> 
Matrix<float> Matrix<int>::operator+(const Matrix<float>& other){
	if(h!=other.h||w!=other.w){
		throw std::exception;
	}
	Matrix<float> mat(h,w);
	for(int i=0;i<h*w;++i){
		mat.matrix[i]=other.matrix[i]+matrix[i];
	}
	return mat;
}

template<> 
Matrix<float> Matrix<int>::operator+(Matrix<float>&& other){
	if(h!=other.h||w!=other.w){
		throw std::exception;
	}
	Matrix<float> mat(h,w);
	for(int i=0;i<h*w;++i){
		mat.matrix[i]=other.matrix[i]+matrix[i];
	}
	return mat;
}

template<> 
Matrix<float> Matrix<int>::operator-(const Matrix<float>& other){
	if(h!=other.h||w!=other.w){
		throw std::exception;
	}
	Matrix<float> mat(h,w);
	for(int i=0;i<h*w;++i){
		mat.matrix[i]=-other.matrix[i]+matrix[i];
	}
	return mat;
}

template<> 
Matrix<float> Matrix<int>::operator-(Matrix<float>&& other){
	if(h!=other.h||w!=other.w){
		throw std::exception;
	}
	Matrix<float> mat(h,w);
	for(int i=0;i<h*w;++i){
		mat.matrix[i]=-other.matrix[i]+matrix[i];
	}
	return mat;
}

template<> 
Matrix<double> Matrix<int>::operator+(const Matrix<double>& other){
	if(h!=other.h||w!=other.w){
		throw std::exception;
	}
	Matrix<double> mat(h,w);
	for(int i=0;i<h*w;++i){
		mat.matrix[i]=other.matrix[i]+matrix[i];
	}
	return mat;
}

template<> 
Matrix<double> Matrix<int>::operator+(Matrix<double>&& other){
	if(h!=other.h||w!=other.w){
		throw std::exception;
	}
	Matrix<double> mat(h,w);
	for(int i=0;i<h*w;++i){
		mat.matrix[i]=other.matrix[i]+matrix[i];
	}
	return mat;
}

template<> 
Matrix<double> Matrix<int>::operator-(const Matrix<double>& other){
	if(h!=other.h||w!=other.w){
		throw std::exception;
	}
	Matrix<double> mat(h,w);
	for(int i=0;i<h*w;++i){
		mat.matrix[i]=-other.matrix[i]+matrix[i];
	}
	return mat;
}

template<> 
Matrix<double> Matrix<int>::operator-(Matrix<double>&& other){
	if(h!=other.h||w!=other.w){
		throw std::exception;
	}
	Matrix<double> mat(h,w);
	for(int i=0;i<h*w;++i){
		mat.matrix[i]=-other.matrix[i]+matrix[i];
	}
	return mat;
}

template<> 
Matrix<long double> Matrix<int>::operator+(const Matrix<long double>& other){
	if(h!=other.h||w!=other.w){
		throw std::exception;
	}
	Matrix<long double> mat(h,w);
	for(int i=0;i<h*w;++i){
		mat.matrix[i]=other.matrix[i]+matrix[i];
	}
	return mat;
}

template<> 
Matrix<long double> Matrix<int>::operator+(Matrix<long double>&& other){
	if(h!=other.h||w!=other.w){
		throw std::exception;
	}
	Matrix<long double> mat(h,w);
	for(int i=0;i<h*w;++i){
		mat.matrix[i]=other.matrix[i]+matrix[i];
	}
	return mat;
}

template<> 
Matrix<long double> Matrix<int>::operator-(const Matrix<long double>& other){
	if(h!=other.h||w!=other.w){
		throw std::exception;
	}
	Matrix<long double> mat(h,w);
	for(int i=0;i<h*w;++i){
		mat.matrix[i]=-other.matrix[i]+matrix[i];
	}
	return mat;
}

template<> 
Matrix<long double> Matrix<int>::operator-(Matrix<long double>&& other){
	if(h!=other.h||w!=other.w){
		throw std::exception;
	}
	Matrix<long double> mat(h,w);
	for(int i=0;i<h*w;++i){
		mat.matrix[i]=-other.matrix[i]+matrix[i];
	}
	return mat;
}

template<> 
template<class T>
Matrix<std::complex<T>> Matrix<int>::operator+(Matrix<std::complex<T>>&& other){
	if(h!=other.h||w!=other.w){
		throw std::exception;
	}
	Matrix<std::complex<T>> mat(h,w);
	for(int i=0;i<h*w;++i){
		mat.matrix[i]=other.matrix[i]+matrix[i];
	}
	return mat;
}

template<> 
template<class T>
Matrix<std::complex<T>> Matrix<int>::operator-(Matrix<std::complex<T>>&& other){
	if(h!=other.h||w!=other.w){
		throw std::exception;
	}
	Matrix<std::complex<T>> mat(h,w);
	for(int i=0;i<h*w;++i){
		mat.matrix[i]=-other.matrix[i]+matrix[i];
	}
	return mat;
}