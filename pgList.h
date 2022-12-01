#pragma once
#include <iostream>

template <typename A>
struct cell
{
	//値
	A val;
	//前のセル
	cell* prev;
	//後ろのセル
	cell* next;
	//コンストラクタ

	//コンストラクタ
	cell()
	{
		//ダミーノードを用意
		prev = this;
		next = this;
	}

	cell(A value, cell* prev_, cell* next_)
	{
		val = value;
		prev = prev_;
		next = next_;

	}
};

template <class A>
class PgList 
{
public:
	PgList()
	{
		dmm = new cell<A>();

		size = 0;
	}
	int ListSize() {
		return size;
	}

	void PushFuront(A val) {
		cell<A>*  front= dmm;
		create(dmm, val);
	}

	void PushBack(A val) {
		cell<A>* front = dmm->prev;
		create(dmm, val);
	}

	void InPlaceList(A val,int num)
	{
		cell<A>* CellPlace = nullptr;
		CellPlace = dmm;

		//指定の場所まで移動させる
		for (int i = 0; i < num; i++) {
			CellPlace = CellPlace->next;
		}

		//追加
		create(CellPlace, val);
	}
	
	bool SearchList(int num) {
		if (num<0 || num>size) {
			return false;
		}
		return true;
	}

	bool ChangeValueList(A val,int num) {

		if (num < 0 || num>size)
		{
			return false;
		}

		cell<A>* Cell = nullptr;
		Cell = dmm;

		//任意の場所まで移動
		for (int i = 0; i < num + 1; i++)
		{
			Cell = Cell->next;
		}

		//変更
		Cell->val = val;

		return true;

	}

	void Dump() {
		cell<A>* cellList = dmm->next;

		std::cout << "要素一覧:{" << std::endl;

		int index = 0;
		for (int i = 0; i < size - 1; i++)
		{
			std::cout << ' ' << index << ':' << '"' << cellList->val << '"' << ',' << std::endl;
			cellList = cellList->next;
			index++;
		}
		std::cout << ' ' << index << ':' << '"' << cellList->val << '"' << std::endl;

		std::cout << '}' << std::endl;
	}

	void indexElement(int num) {
		cell<A>* cellList = nullptr;
		cellList = dmm;

		int index = -1;

		for (int i = 0; i < num + 1; i++)
		{
			cellList = cellList->next;
			index++;
		}

		std::cout << index << ':' << cellList->val << '\n';
	}

	A GetElement(int num)
	{
		cell<A>* cellList = nullptr;
		cellList = dmm;

		for (int i = 0; i < num + 1; i++)
		{
			cellList = cellList->next;
		}

		return cellList->val;
	}

	bool DeleteOneList(int num) {
		if (num < 0 || num>size)
		{
			return false;
		}

		cell<A>* cellList = nullptr;

		cellList = dmm;

		//任意の場所まで移動
		for (int i = 0; i < num + 1; i++)
		{
			cellList = cellList->next;
		}

		cellList->prev->next = cellList->next;

		cellList->next->prev = cellList->next;

		delete cellList;

		size--;

		return true;
	}

	void SortList(bool flag = true) {
		cell<A>* cellListl = nullptr;

		cell<A>* cellList2 = nullptr;

		for (int i = 0; i < (size - 1); i++)
		{
			cellListl = GetCell(i);

			for (int j = (size - 1); j > i; j--)
			{
				cellList2 = GetCell(j);
				if (flag)
				{
					if (cellList2->val < cellList2->prev->val)
					{
						A val = cellList2->val;
						ChangeValueList(cellList2->prev->val, j);
						ChangeValueList(val, j - 1);
					}
				}
				else
				{
					if (cellList2->val > cellList2->prev->val)
					{
						A val = cellList2->val;
						ChangeValueList(cellList2->prev->val, j);
						ChangeValueList(val, j - 1);
					}
				}
			}
		}
	}

private:
	int size = 0;
	cell<A>* dmm;

	void create(cell<A>* currentCell, A val)
	{
		//新しいセル
		cell<A>* newCell;

		newCell = new cell<A>(val,currentCell,currentCell->next);

		currentCell->next->prev = newCell;
		currentCell->next = newCell;
		currentCell = newCell;

		size++;
	}

	cell<A>* GetCell(int num)
	{
		cell<A>* cellList = dmm;

		//任意の場所まで移動
		for (int i = 0; i < num + 1; i++)
		{
			cellList = cellList->next;
		}

		return cellList;
	}
};