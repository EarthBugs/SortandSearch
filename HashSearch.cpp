#include <iostream>
#include "HashSearch.h"
using namespace std;

void HashSearch::GetRandomArray()
{
	srand(time(NULL));
	data[0] = 0;
	//使用随机数为data中的元素赋值
	for (int index = 0; index < MAXSIZE + 1; index++)
	{
		data[index] = rand() % MAXSIZE;
	}
}

void HashSearch::PrintArray()
{
	for (int index = 0; index < MAXSIZE; index++)
	{
		cout << data[index] << " ";
	}
}

void HashSearch::GetHashTable()
{
	//遍历data数组，计算每个元素在哈希表中的下标，并写入哈希表
	for (int dataindex = 0, hashindex; index < MAXSIZE; index++)
	{
		hashindex = data[dataindex] % MAXSIZE;//计算该元素在哈希表中的下标
		//循环遍历表，直到index遍历到hashindex-1时停止
		for (int index = hashindex; index != hashindex - 1; index = (++index) % MAXSIZE)
		{
			if(data[dataindex] == )
		}
	}
}

void HashSearch::GetRandomValue()
{
	long random = rand();
	int index = 1 + random % MAXSIZE;
	value = data[index];
}
