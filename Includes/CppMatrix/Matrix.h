#include<vector>
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
	Matrix();
	//���ڷ� h�� w�� ����, 0���� �ʱ�ȭ
	Matrix(int h,int w);
	//Initializer_list�� �̿��� Matrix �ʱ�ȭ ���� �ʿ�
	Matrix<T>& operator=(const Matrix<T>& mat);
	Matrix<T>& operator=(Matrix<T>&& mat);
	Matrix<T> operator+(const Matrix<T>& mat);
	Matrix<T> operator+(Matrix<T>&& mat);
	Matrix<T> operator-(const Matrix<T>& mat);
	Matrix<T> operator-(Matrix<T>&& mat);
	Matrix<T> operator*(const Matrix<T>& mat);
	Matrix<T> operator*(Matrix<T>&& mat);
};