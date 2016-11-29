#pragma once
#include <array>

typedef std::array<std::array<float, 3>, 3> arr2d;
class Matrix
{
public:
	Matrix(arr2d matrix2d);
	~Matrix();
	arr2d matrix2d;
	void Populate(float popIn);
	void Print();
	arr2d getMatrix2d();
	void setMatrix2d();

};