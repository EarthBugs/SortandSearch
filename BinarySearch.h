#pragma once
#include <stdlib.h>
#include <time.h>
#include "MAXSIZE.h"

class BinarySearch
{
private:
	int* data = new int[MAXSIZE + 1];//��������
	int value;//����ֵ
	int index = -1;//���ҵ����±�
	int counter;//���Ҵ���������
public:
	void GetRandomArray();//������ɴ�������
	void PrintArray();//��ӡ����
	void GetRandomValue();//������ɴ���ֵ
	void Search();//���ݴ������Ѱ�����±�
	int GetValue();//���ش���ֵ
	int GetIndex();//�����±�
	int GetCounter();//���رȶԴ���
};