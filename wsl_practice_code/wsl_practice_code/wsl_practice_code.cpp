// wsl_practice_code.cpp: 定义应用程序的入口点。
//
#include "common/common.h"
#include "wsl_practice_code.h"
#include "leetcode/BrickWall.hpp"
using namespace std;

int main()
{
	auto paramMatrix = wslFunc::makeMatrix(R"([[1,1,1,1,1,1,1,1,1,1],[1,1,1,1,1,1,1,1,1,1],[1,1,1,1,1,1,1,1,1,1]])");
	Solution s;
	s.leastBricks(paramMatrix);
	cout << "Hello CMake." << endl;
	return 0;
}
