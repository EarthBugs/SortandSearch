#pragma once
#include <stdlib.h>
#include <time.h>
#include "MAXSIZE.h"

class HashSearch
{
private:
	int* data = new int[MAXSIZE];
	int hashtable[MAXSIZE]{ -1 };//ɢ�б��ʼ��Ϊ-1
	int value;//����ֵ
	int index = -1;//���ҵ����±�
public:
	void GetRandomArray();//������ɴ�������
	void PrintArray();//��ӡ����
	void GetHashTable();//���ɹ�ϣ��
	void GetRandomValue();//������ɴ���ֵ
	void Search();//���ݴ������Ѱ�����±�
	int GetValue();//���ش���ֵ
	int GetIndex();//�����±�
	int GetCounter();//���رȶԴ���
};