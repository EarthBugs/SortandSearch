#include <iostream>
#include "HashSearch.h"
using namespace std;

void HashSearch::RandomArray()
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

void HashSearch::HashTable()
{
	//����data���飬����ÿ��Ԫ���ڹ�ϣ���е��±꣬��д���ϣ��
	for (int dataindex = 0, hashindex; dataindex < MAXSIZE; dataindex++)
	{
		hashindex = data[dataindex] % MAXSIZE;//�����Ԫ���ڹ�ϣ���е��±�
		if (hashtable[hashindex] == -1) hashtable[hashindex] = data[dataindex];//����Ӧλ��Ϊ�գ���д��
		else
			//����ѭ��������ֱ��index������hashindex-1ʱֹͣ
			for (int index = hashindex; index != hashindex - 1; index = (++index) % MAXSIZE)
				if (hashtable[index] == -1) hashtable[index] = data[dataindex]; break;//��������λ��ʱ��д�벢�˳�ѭ�����������������һ��Ԫ��
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
	int hashindex = value % MAXSIZE;//�����Ԫ���ڹ�ϣ���е��±�
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
