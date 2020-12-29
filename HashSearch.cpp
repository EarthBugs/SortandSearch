#include <iostream>
#include "HashSearch.h"
using namespace std;

HashSearch::HashSearch()
{
	//将散列表初始化为-1
	for (int index = 0; index < int(MAXSIZE * 1.4); index++)
		hashtable[index] = -1;
}

void HashSearch::RandomArray()
{
	srand(time(NULL));
	//使用随机数为data中的元素赋值
	for (int index = 0; index < MAXSIZE; index++)
	{
		data[index] = rand();
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
 		if (hashtable[hashindex] == -1)//若对应下标的值为空
			hashtable[hashindex] = data[dataindex];//则写入
		//否则循环遍历表，直到查找到空位置或index=hashindex-1时停止
		else
		{
			for (int index = hashindex; index != hashindex - 1; index = (++index) % MAXSIZE)
			{
				//当遇到空位置时，写入并退出循环。否则继续查找下一个元素
				if (hashtable[index] == -1) 
				{
					hashtable[index] = data[dataindex];
					break;
				}
			}
		}
	}
}

void HashSearch::PrintHashTable()
{
	for (int index = 0; index < int(MAXSIZE * 1.4); index++)
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
	//若对应下标的值相等，则下标为该下标
	if (hashtable[hashindex] == value)
		index = hashindex;
	//否则循环遍历表，直到查找到空位置或index=hashindex-1时停止
	else
	{
		for (int index = hashindex; index != hashindex - 1; index = (++index) % MAXSIZE)
		{
			//当遇到空位置时，将index置为-1并退出循环。否则继续查找下一个元素
			if (hashtable[index] == -1) index = -1;
			break;
		}
	}
}

int HashSearch::GetValue()
{
	return value;
}

int HashSearch::GetIndex()
{
	return index;
}
