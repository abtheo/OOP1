#include "stdafx.h"
#include "Matrix.h"
#include <iostream>

//Constructor
Matrix::Matrix(arr2d data)
{
	matrix2d = data;
}

//Destructor
Matrix::~Matrix()
{

}

void Matrix::Populate(float popIn) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			matrix2d[i] = { popIn, popIn, popIn };
		}
	}
}

void Matrix::Print() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			std::cout << matrix2d[i][j];
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}


//Getters
arr2d Matrix::getMatrix2d() { return matrix2d; }
//Setters
void Matrix::setMatrix2d() {}
