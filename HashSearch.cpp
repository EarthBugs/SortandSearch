#include <iostream>
#include "HashSearch.h"
using namespace std;

void HashSearch::GetRandomArray()
{
	srand(time(NULL));
	data[0] = 0;
	//ʹ�������Ϊdata�е�Ԫ�ظ�ֵ
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
	//����data���飬����ÿ��Ԫ���ڹ�ϣ���е��±꣬��д���ϣ��
	for (int dataindex = 0, hashindex; index < MAXSIZE; index++)
	{
		hashindex = data[dataindex] % MAXSIZE;//�����Ԫ���ڹ�ϣ���е��±�
		//ѭ��������ֱ��index������hashindex-1ʱֹͣ
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
