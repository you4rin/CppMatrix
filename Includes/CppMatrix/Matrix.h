
template<class T>
class Matrix{
	int w,h;
	T* matrix;
public:
	Matrix();
	Matrix<T>& operator=(const Matrix<T>& mat);
	Matrix<T>& operator=(Matrix<T>&& mat);
	Matrix<T> operator+(const Matrix<T>& mat);
	Matrix<T> operator+(Matrix<T>&& mat);
	Matrix<T> operator-(const Matrix<T>& mat);
	Matrix<T> operator-(Matrix<T>&& mat);
	Matrix<T> operator*(const Matrix<T>& mat);
	Matrix<T> operator*(Matrix<T>&& mat);
};