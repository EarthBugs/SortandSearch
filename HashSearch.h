#pragma once
#include <stdlib.h>
#include <time.h>
#include "MAXSIZE.h"

class HashSearch
{
private:
	int data[MAXSIZE];
	int hashtable[int(MAXSIZE * 1.4)];//ɢ�б�
	int value;//����ֵ
	int index = -1;//���ҵ����±�
public:
	HashSearch();//���캯��
	void RandomArray();//������ɴ�������
	void PrintArray();//��ӡ����
	void HashTable();//���ɹ�ϣ��
	void PrintHashTable();//��ӡ��ϣ��
	void RandomValue();//������ɴ���ֵ
	void Search();//���ݴ������Ѱ�����±�
	int GetValue();//���ش���ֵ
	int GetIndex();//�����±�
};