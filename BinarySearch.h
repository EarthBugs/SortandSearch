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
	void RandomArray();//������ɴ�������
	void PrintArray();//��ӡ����
	void RandomValue();//������ɴ���ֵ
	void Search();//���ݴ������Ѱ�����±�
	int GetValue();//���ش���ֵ
	int GetIndex();//�����±�
	int GetCounter();//���رȶԴ���
};