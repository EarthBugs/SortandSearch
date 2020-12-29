#include <iostream>
#include "HashSearch.h"
using namespace std;

void HashSearch::RandomArray()
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

void HashSearch::HashTable()
{
	//遍历data数组，计算每个元素在哈希表中的下标，并写入哈希表
	for (int dataindex = 0, hashindex; dataindex < MAXSIZE; dataindex++)
	{
		hashindex = data[dataindex] % MAXSIZE;//计算该元素在哈希表中的下标
		if (hashtable[hashindex] == -1) hashtable[hashindex] = data[dataindex];//若对应位数为空，则写入
		else
			//否则循环遍历表，直到index遍历到hashindex-1时停止
			for (int index = hashindex; index != hashindex - 1; index = (++index) % MAXSIZE)
				if (hashtable[index] == -1) hashtable[index] = data[dataindex]; break;//当遇到空位置时，写入并退出循环。否则继续查找下一个元素
	}
}

void HashSearch::PrintHashTable()
{
	for (int index = 0; index <= int(MAXSIZE * 1.4); index++)
	{
		cout << hashtable[index] << " ";
	}
}

void HashSearch::RandomValue()
{
	long random = rand();
	int index = 1 + random % MAXSIZE;
	value = data[index];
}

void HashSearch::Search()
{
	int hashindex = value % MAXSIZE;//计算该元素在哈希表中的下标
	//if(hashtable[hashindex] == value)
}

int HashSearch::GetValue()
{
	return value;
}

int HashSearch::GetIndex()
{
	return index;
}
