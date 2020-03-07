#include<vector>
#include<complex>
/*
무엇을 구현해야 하는가?
1. 각종 연산자(특히 곱셈의 경우, 시간복잡도 O(N^2.3)인 방법 찾아보도록 하자)
2. Matrix간의 형변환(double 매트릭스+int 매트릭스같은거 구현)
3. factorization 구현(LDU/QR/대각화 등)
4. 큰 수(big integer) 구현
*/
template<class T>
class Matrix{
	int h,w;
	std::vector<T> matrix;
public:
	//인자 없음
	Matrix():h(1),w(1),matrix(std::vector<T>(1,0)){}
	//인자로 h와 w만 받음, 0으로 초기화
	Matrix(int h,int w):h(h),w(w),matrix(std::vector<T>(h*w,0)){}
	//Initializer_list를 이용한 Matrix 초기화 구현 필요
	//일반적인 Matrix간의 대입연산
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

	//일반적인 Matrix간의 덧셈
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

	//일반적인 Matrix간의 뺄셈
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

	//일반적인 Matrix간의 곱셈 -> 추후 구현 필요
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