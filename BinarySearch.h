#pragma once
#include <stdlib.h>
#include <time.h>
#include "MAXSIZE.h"

class BinarySearch
{
private:
	int* data = new int[MAXSIZE + 1];//待查数组
	int value;//待查值
	int index = -1;//查找到的下标
	int counter;//查找次数计数器
public:
	void RandomArray();//随机生成待查数组
	void PrintArray();//打印数组
	void RandomValue();//随机生成待查值
	void Search();//根据传入参数寻找其下标
	int GetValue();//返回待查值
	int GetIndex();//返回下标
	int GetCounter();//返回比对次数
};