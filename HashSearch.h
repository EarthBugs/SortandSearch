#pragma once
#include <stdlib.h>
#include <time.h>
#include "MAXSIZE.h"

class HashSearch
{
private:
	int data[MAXSIZE];
	int hashtable[int(MAXSIZE * 1.4)];//散列表
	int value;//待查值
	int index = -1;//查找到的下标
public:
	HashSearch();//构造函数
	void RandomArray();//随机生成待查数组
	void PrintArray();//打印数组
	void HashTable();//生成哈希表
	void PrintHashTable();//打印哈希表
	void RandomValue();//随机生成待查值
	void Search();//根据传入参数寻找其下标
	int GetValue();//返回待查值
	int GetIndex();//返回下标
};