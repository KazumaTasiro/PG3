#include <stdlib.h>
#include <stdio.h>
#include <list>
#include <iostream>

using namespace std;

typedef struct cell
{
	int val;
	struct cell* prev;
	struct cell* next;
}CELL;

void create(CELL* currentCell, int val);
void index(CELL* endCell);
CELL* getInsertCellAddress(CELL* endCELL, int iterator);

int main() {
	int iterator;
	int operation;
	int inputValue;
	CELL* insertCell;

	//[手順２]先頭のセルの宣言
	CELL head;
	head.next = nullptr;
	//Visual Studioではnextに
	//何らかの値が入った状態で初期化されるので,nullptrを代入する

	while (1) {
		printf("[要素の操作]\n");
		printf("1.要素の表示\n");
		printf("2.要素の挿入\n");
		if (head.prev != nullptr) {
			printf("3.要素の編集\n");
			printf("4.要素の削除\n");
		}
		printf("5.要素の並び替え\n");
		scanf_s("%d", &operation);
		scanf_s("%d", &iterator);
		printf("挿入する値を入力してください\n");
		scanf_s("%d", &inputValue);
		//[手順３]任意のセルの後ろに追加
		insertCell = getInsertCellAddress(&head, iterator);
		create(insertCell, inputValue);

		//[手順4]リスト一覧の表示
		index(&head);
	}

	return 0;
}

void create(CELL* currentCell, int val)
{
	CELL* newCell;
	newCell = (CELL*)malloc(sizeof(CELL));
	newCell->val = val;
	newCell->prev = currentCell;
	newCell->next = currentCell->next;

	if (currentCell->next) {
		CELL* nextCell = currentCell->next;
		nextCell->prev = newCell;
	}

	currentCell->next = newCell;
}

void index(CELL* endCell)
{
	int no = 1;
	while (endCell->next != nullptr)
	{
		endCell = endCell->next;
		printf("%d\n", no);

		printf("%5d\n", endCell->val);
		no++;
	}
}

CELL* getInsertCellAddress(CELL* endCELL, int iterator)
{
	for (int i = 0; i < iterator; i++) {
		if (endCELL->next) {
			endCELL = endCELL->next;
		}
		else
		{
			break;
		}
	}
	return endCELL;
}
