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
	Matrix<T>& operator=(const Matrix<T>& mat){

	}
	Matrix<T>& operator=(Matrix<T>&& mat){

	}
	Matrix<T> operator+(const Matrix<T>& mat){

	}
	Matrix<T> operator+(Matrix<T>&& mat){

	}
	Matrix<T> operator-(const Matrix<T>& mat){

	}
	Matrix<T> operator-(Matrix<T>&& mat){

	}
	Matrix<T> operator*(const Matrix<T>& mat){

	}
	Matrix<T> operator*(Matrix<T>&& mat){

	}
};
template<> 
Matrix<float> Matrix<int>::operator+(const Matrix<float>& mat){

}
template<> 
Matrix<float> Matrix<int>::operator+(Matrix<float>&& mat){

}
template<> 
Matrix<float> Matrix<float>::operator+(Matrix<int>&& mat){

}