#include <stdlib.h>
#include <stdio.h>
#include <list>
#include "pgList.h"
#include<string>


using namespace std;



//一覧用
template<typename A>
void Lists(PgList<A>& strList, int& operationNum, int& displayNum);
//挿入
template<typename A>
void InList(PgList<A>& strList, int& operationNum);
//編集
template<typename A>
void EditOneList(PgList<A>& strList, int& operationNum);
//消去
template<typename A>
void DeleteOneList(PgList<A>& strList, int& operationNum);
//変更
template<typename A>
void ChangeList(PgList<A>& strList, int& operationNum);


int main() {
	PgList<std::string> strList;



	//strList.Dump();

	//要素の操作の操作番号
	int operationNum = 0;

	//要素の表示の操作番号
	int displayNum = 0;


	while (true)
	{
		std::cout << "[要素の操作]" << std::endl;
		std::cout << "1.要素の表示" << std::endl;
		std::cout << "2.要素の挿入" << std::endl;

		if (strList.ListSize() > 0)
		{
			std::cout << "3.要素の編集" << std::endl;
			std::cout << "4.要素の削除" << std::endl;
		}

		std::cout << "5.要素の並び替え" << std::endl;
		std::cout << std::endl;
		std::cout << "----------------------------------" << std::endl;
		std::cout << "操作を選択してください" << std::endl;

		std::cout << std::endl;

		if (operationNum == 0)
		{
			//操作番号を取得
			std::cin >> operationNum;
		}
		system("cls");

		switch (operationNum)
		{
		case 1://要素の表示
			Lists(strList, operationNum, displayNum);
			break;

		case 2://最後尾に要素を追加
			InList(strList, operationNum);
			break;

		case 3://任意の場所の値を変更
			EditOneList(strList, operationNum);
			break;
		case 4://任意の場所の削除
			DeleteOneList(strList, operationNum);
			break;
		case 5://任意の場所と任意の場所を入れ替え
			ChangeList(strList, operationNum);
			break;
		}
	}

	return 0;
}

template<typename A>
void Lists(PgList<A>& strList, int& operationNum, int& displayNum)
{
	std::cout << "[要素の表示]" << std::endl;
	std::cout << "1.要素の一覧表示" << std::endl;
	std::cout << "2.順番を指定して要素を表示" << std::endl;
	std::cout << "9.要素操作に戻る" << std::endl;
	std::cout << std::endl;
	std::cout << "操作を選択してください" << std::endl;

	//操作番号を取得
	std::cin >> displayNum;
	system("cls");
	switch (displayNum)
	{
	case 1:
		std::cout << "[要素の一覧表示]" << std::endl;

		//一覧表示
		strList.Dump();

		std::cout << "要素数:" << strList.ListSize() << std::endl;

		break;
	case 2:
		std::cout << "[順番を指定して要素を表示]" << std::endl;
		std::cout << "表示したい要素の順番を指定してください。" << std::endl;

		//指定する番号を取得
		int specifyNum;
		std::cin >> specifyNum;
		std::cout << std::endl;

		//指定して表示
		strList.indexElement(specifyNum);

		break;

	case 9:
		operationNum = 0;
		break;
	}

	//要素操作に戻らなかったら
	if (displayNum == 1 || displayNum == 2)
	{
		std::cout << std::endl;
		std::cout << "----------------------------------" << std::endl;
		std::cout << "1.要素の表示に戻る" << std::endl;
		std::cout << "2.要素の操作に戻る" << std::endl;

		//操作番号を取得
		std::cin >> displayNum;

		system("cls");
		switch (displayNum)
		{
		case 1:
			operationNum = 1;
			break;
		case 2:
			operationNum = 0;
			break;
		default:
			break;
		}
	}
}

template<typename A>
void InList(PgList<A>& strList, int& operationNum)
{
	std::cout << "[リスト要素の挿入]" << std::endl;
	std::cout << std::endl;
	std::cout << "要素を追加場所を指定してください。最後尾に追加する場合は何も入力しないでください。" << std::endl;
	std::string insertNum;
	while (std::getchar() != '\n');

	std::getline(std::cin, insertNum);

	if (insertNum == "")
	{
		std::cout << "追加する要素の値を入力してください" << std::endl;
		A elem{};

		std::cin >> elem;

		strList.PushBack(elem);

		std::cout << "要素" << elem << "が" << "最後尾に挿入されました" << std::endl;
	}
	else
	{
		int index = std::atoi(insertNum.c_str());

		std::cout << "追加する要素の値を入力してください" << std::endl;
		A elem{};

		std::cin >> elem;

		strList.InPlaceList(elem, index);

		std::cout << index << "番目に"<< "要素" << index << "が挿入されました" << std::endl;
	}

	std::cout << std::endl;
	std::cout << "----------------------------------" << std::endl;
	std::cout << "9.要素操作に戻る" << std::endl;

	std::cin >> operationNum;
	system("cls");

	if (operationNum == 9)
	{
		operationNum = 0;
	}
	else
	{
		operationNum = 2;
	}
}

template<typename A>
void EditOneList(PgList<A>& strList, int& operationNum)
{
	std::cout << "[要素の編集]" << std::endl;
	std::cout << std::endl;
	std::cout << "編集したい要素の番号を入力してください" << std::endl;

	int elementNum;
	std::cin >> elementNum;
	std::cout << std::endl;

	if (strList.SearchList(elementNum))
	{
		std::cout << elementNum << "番目の要素の変更する値を入力してください。" << std::endl;

		A changeElement{};
		std::cin >> changeElement;

		strList.ChangeValueList(changeElement, elementNum);
		std::cout << std::endl;

		std::cout << elementNum << "番目の要素の値が" << '"' << changeElement << '"' << "に変更されました" << std::endl;
	}
	else
	{
		std::cout << elementNum << "番目の要素のが見つかりませんでした。" << std::endl;
	}


	std::cout << std::endl;
	std::cout << "----------------------------------" << std::endl;
	std::cout << "9.要素操作に戻る" << std::endl;

	std::cin >> operationNum;
	system("cls");

	if (operationNum == 9)
	{
		operationNum = 0;
	}
	else
	{
		operationNum = 3;
	}
}

template<typename A>
void DeleteOneList(PgList<A>& strList, int& operationNum)
{
	std::cout << "[要素の削除]" << std::endl;
	std::cout << std::endl;
	std::cout << "削除したい要素の番号を指定してください" << std::endl;

	int elementNum;
	std::cin >> elementNum;
	std::cout << std::endl;

	if (strList.SearchList(elementNum))
	{
		std::cout << elementNum << "番目の要素" << '"' << strList.GetElement(elementNum) << '"' << "削除しました" << std::endl;

		strList.DeleteOneList(elementNum);

		std::cout << std::endl;
	}
	else
	{
		std::cout << elementNum << "番目の要素のが見つかりませんでした。" << std::endl;
	}

	std::cout << std::endl;
	std::cout << "----------------------------------" << std::endl;
	std::cout << "9.要素操作に戻る" << std::endl;

	std::cin >> operationNum;
	system("cls");

	if (operationNum == 9)
	{
		operationNum = 0;
	}
	else
	{
		operationNum = 4;
	}
}

template<typename A>
void ChangeList(PgList<A>& strList, int& operationNum)
{
	std::cout << "[要素の並び替え]" << std::endl;
	std::cout << std::endl;
	std::cout << "並び替え方法を選択してください" << std::endl;
	std::cout << "1.昇順で並び替える" << std::endl;
	std::cout << "2.降順で並び替える" << std::endl;

	int changeOperationNum;

	std::cin >> changeOperationNum;

	switch (changeOperationNum)
	{
	case 1:
	{

		strList.SortList();
		std::cout << "リストの要素を昇順で並び替えました" << std::endl;
	}
	break;
	case 2:
	{

		strList.SortList(false);
		std::cout << "リストの要素を降順で並び替えました" << std::endl;

		break;
	}
	default:
	{
		break;
	}
	}

	std::cout << std::endl;
	std::cout << "----------------------------------" << std::endl;
	std::cout << "9.要素操作に戻る" << std::endl;

	std::cin >> operationNum;
	system("cls");

	if (operationNum == 9)
	{
		operationNum = 0;
	}
	else
	{
		operationNum = 5;
	}
}
