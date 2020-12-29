#include <iostream>
#include "HashSearch.h"
using namespace std;

HashSearch::HashSearch()
{
	//��ɢ�б��ʼ��Ϊ-1
	for (int index = 0; index < int(MAXSIZE * 1.4); index++)
		hashtable[index] = -1;
}

void HashSearch::RandomArray()
{
	srand(time(NULL));
	//ʹ�������Ϊdata�е�Ԫ�ظ�ֵ
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
	//����data���飬����ÿ��Ԫ���ڹ�ϣ���е��±꣬��д���ϣ��
	for (int dataindex = 0, hashindex; dataindex < MAXSIZE; dataindex++)
	{
		hashindex = data[dataindex] % MAXSIZE;//�����Ԫ���ڹ�ϣ���е��±�
 		if (hashtable[hashindex] == -1)//����Ӧ�±��ֵΪ��
			hashtable[hashindex] = data[dataindex];//��д��
		//����ѭ��������ֱ�����ҵ���λ�û�index=hashindex-1ʱֹͣ
		else
		{
			for (int index = hashindex; index != hashindex - 1; index = (++index) % MAXSIZE)
			{
				//��������λ��ʱ��д�벢�˳�ѭ�����������������һ��Ԫ��
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
	int hashindex = value % MAXSIZE;//�����Ԫ���ڹ�ϣ���е��±�
	//����Ӧ�±��ֵ��ȣ����±�Ϊ���±�
	if (hashtable[hashindex] == value)
		index = hashindex;
	//����ѭ��������ֱ�����ҵ���λ�û�index=hashindex-1ʱֹͣ
	else
	{
		for (int index = hashindex; index != hashindex - 1; index = (++index) % MAXSIZE)
		{
			//��������λ��ʱ����index��Ϊ-1���˳�ѭ�����������������һ��Ԫ��
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
