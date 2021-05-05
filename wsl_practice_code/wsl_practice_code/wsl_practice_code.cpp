// wsl_practice_code.cpp: 定义应用程序的入口点。
//
#include "common/common.h"
#include "wsl_practice_code.h"
#include "Delete and Earn.hpp"
//#include "Maxium Subarray.hpp"
using namespace std;

int main()
{
    string arrayA = "[3,1,4,5,1,3,7,2,9,1,4,5,2,1]";
	auto vecA = wslFunc::makeVector(arrayA);
	wslSort::quickSort(vecA);
	Solution s;
	
	cout << s.deleteAndEarn(vecA) << endl;
	cout << "Hello CMake." << endl;
	return 0;
}
