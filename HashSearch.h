#pragma once
#include <stdlib.h>
#include <time.h>
#include "MAXSIZE.h"

class HashSearch
{
private:
	int* data = new int[MAXSIZE];
	int hashtable[MAXSIZE]{ -1 };//散列表初始化为-1
	int value;//待查值
	int index = -1;//查找到的下标
public:
	void GetRandomArray();//随机生成待查数组
	void PrintArray();//打印数组
	void GetHashTable();//生成哈希表
	void GetRandomValue();//随机生成待查值
	void Search();//根据传入参数寻找其下标
	int GetValue();//返回待查值
	int GetIndex();//返回下标
	int GetCounter();//返回比对次数
};