#pragma once
#include <stdlib.h>
#include <time.h>
#include "MAXSIZE.h"

class HashSearch
{
private:
	int* data = new int[MAXSIZE];
	int hashtable[int(MAXSIZE * 1.4)]{ -1 };//ɢ�б��ʼ��Ϊ-1
	int value;//����ֵ
	int index = -1;//���ҵ����±�
public:
	void RandomArray();//������ɴ�������
	void PrintArray();//��ӡ����
	void HashTable();//���ɹ�ϣ��
	void RandomValue();//������ɴ���ֵ
	void Search();//���ݴ������Ѱ�����±�
	int GetValue();//���ش���ֵ
	int GetIndex();//�����±�
	int GetCounter();//���رȶԴ���
};