// wsl_practice_code.cpp: 定义应用程序的入口点。
//
#include "common/common.h"
#include "wsl_practice_code.h"
#include "Rotate Matrix.hpp"
//#include "Maxium Subarray.hpp"
using namespace std;

int main()
{
    string arrayA = "[\
		[5, 1, 9, 11],\
		[2, 4, 8, 10],\
		[13, 3, 6, 7],\
		[15, 14, 12, 16]\
]";
	auto vecA = wslFunc::makeMatrix(arrayA);

	Solution s;
	
	s.rotate(vecA);
	cout << "Hello CMake." << endl;
	return 0;
}
