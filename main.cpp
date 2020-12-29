#include <iostream>
#include <time.h>
#include "BinarySearch.h"
#include "HashSearch.h"
using namespace std;

void BinSearch()
{
	BinarySearch BS;
	char flag = 'N';
	cout << "��ǰ���鹲��" << MAXSIZE << "��Ԫ�ء�\n";
	do
	{
		BS.RandomArray();
		cout << "��ǰ����Ϊ��";
		BS.PrintArray();
		cout << "\n�Ƿ������������飿����Y�������ɣ���������������";
		cin >> flag;
	} while (flag == 'Y');
	flag = 'N';
	do
	{
		BS.RandomValue();
		cout << "\n��ǰ����ֵΪ��" << BS.GetValue();
		cout << "\n�Ƿ��������ɴ���ֵ������Y�������ɣ���������������";
		cin >> flag;
	} while (flag == 'Y');

	cout << "\n��ʼִ�в��ң�\n";
	clock_t t;//��¼���ҿ�ʼʱ��
	t = clock();
	BS.Search();
	t = (clock() - t);
	if (BS.GetIndex() == 0)cout << "����ʧ�ܣ�δ�ҵ���Ԫ�ء�\n";
	else cout << "���ҳɹ���Ԫ���±�Ϊ��" << BS.GetIndex() << "��\n";
	cout << "��ʱ��" << t << "���롣\n";
}

int main()
{
	cout << "����Ϊ���ֲ��ң�\n";
	
	//BinSearch();

	cout << "�����Ƕ��ֲ��ҡ�\n################\n������ɢ�б���ң�";

	HashSearch HS;
	HS.RandomArray();
	cout << "��ǰ����Ϊ��";
	HS.PrintArray();
	HS.HashTable();
	cout << "��ǰ��ϣ��Ϊ��";
	HS.PrintHashTable();
	HS.RandomValue();
	cout << endl << HS.GetValue() << endl;
}