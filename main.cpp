#include <iostream>
#include <time.h>
#include "BinarySearch.h"
#include "HashSearch.h"
using namespace std;

//二分查找
void BinSearch()
{
	BinarySearch BS;
	char flag = 'N';
	cout << "当前数组共有" << MAXSIZE << "个元素。\n";
	do
	{
		BS.RandomArray();
		cout << "当前数组为：";
		BS.PrintArray();
		cout << "\n是否重新生成数组？输入Y重新生成，输入其它继续：";
		cin >> flag;
	} while (flag == 'Y');
	flag = 'N';
	do
	{
		BS.RandomValue();
		cout << "\n当前待查值为：" << BS.GetValue();
		cout << "\n是否重新生成待查值？输入Y重新生成，输入其它继续：";
		cin >> flag;
	} while (flag == 'Y');

	cout << "\n开始执行查找：\n";
	clock_t t;//记录查找开始时间
	t = clock();
	BS.Search();
	t = (clock() - t);
	if (BS.GetIndex() == 0)cout << "查找失败，未找到该元素。\n";
	else cout << "查找成功，元素下标为：" << BS.GetIndex() << "。\n";
	cout << "用时：" << t << "毫秒。\n";
}

//散列查找
void HaSearch()
{
	HashSearch HS;
	char flag = 'N';
	cout << "当前数组共有" << MAXSIZE << "个元素。\n";
	do
	{
		HS.RandomArray();
		cout << "当前数组为：";
		HS.PrintArray();
		cout << "\n是否重新生成数组？输入Y重新生成，输入其它继续：";
		cin >> flag;
	} while (flag == 'Y');
	HS.HashTable();
	cout << "当前哈希表为：\n";
	HS.PrintHashTable();
	flag = 'N';
	do
	{
		HS.RandomValue();
		cout << "\n当前待查值为：" << HS.GetValue();
		cout << "\n是否重新生成待查值？输入Y重新生成，输入其它继续：";
		cin >> flag;
	} while (flag == 'Y');

	cout << "\n开始执行查找：\n";
	clock_t t;//记录查找开始时间
	t = clock();
	HS.Search();
	t = (clock() - t);
	if (HS.GetIndex() == -1) cout << "查找失败，未找到该元素。\n";
	else cout << "查找成功，元素下标为：" << HS.GetIndex() << "。\n";
	cout << "用时：" << t << "毫秒。\n";
}

int main()
{
	cout << "以下为二分查找：\n";

	//BinSearch();

	cout << "以上是二分查找。\n################\n以下是散列表查找：\n";

	HaSearch();

	cout << "以上是散列表查找。程序结束。\n";
}