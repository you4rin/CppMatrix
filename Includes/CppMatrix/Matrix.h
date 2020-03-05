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