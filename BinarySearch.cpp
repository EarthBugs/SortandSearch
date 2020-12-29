#include <iostream>
#include "BinarySearch.h"
using namespace std;

void BinarySearch::RandomArray()
{
	srand(time(NULL));
	data[0] = 0;
	//ʹ�������Ϊdata�е�Ԫ�ظ�ֵ���õ�һ����������
	for (int index = 1; index < MAXSIZE + 1; index++)
	{
		data[index] = data[index - 1] + rand() % MAXSIZE;
	}
}

void BinarySearch::PrintArray()
{
	for (int index = 1; index <= MAXSIZE; index++)
	{
		cout << data[index] << " ";
	}
}

void BinarySearch::RandomValue()
{
	long random = rand();
	int index = 1 + random % MAXSIZE;
	value = data[index];
}

void BinarySearch::Search()
{
	int low = 1, high = MAXSIZE, counter = 1;
	int mid;
	//��������֮�����Ԫ��ʱ��ѭ��ִ�в���
	if (low <= high)
		while (true)
		{
			mid = (low + high) / 2;
			counter++;
			if (value < data[mid]) high = mid - 1;
			else if (value > data[mid])low = mid + 1;
			else
			{
				index = mid;
				break;
			}
		}
	else index = 0;
}

int BinarySearch::GetValue()
{
	return value;
}

int BinarySearch::GetIndex()
{
	return index;
}

int BinarySearch::GetCounter()
{
	return counter;
}
