#include<CppMatrix/Matrix.h>

template<class T>
Matrix<T>::Matrix():h(1),w(1),matrix(std::vector<T>(1,0)()){}

template<class T>
Matrix<T>::Matrix(int h,int w):h(h),w(w),matrix(std::vector<T>(h*w,0)()){}