//Where's Wally V1.0
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <array>
#include <string>
#include "Matrix.h"

using namespace std;
typedef array<array<float, 3>, 3> arr2d;


int main()
{
	arr2d data = { { { 1, 2, 3 },{ 4, 5, 6 },{ 7, 8, 9 } } };
	Matrix matObj(data);
	matObj.Print();
	matObj.Populate(2);
	matObj.Print();
	return 0;
}