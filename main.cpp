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

void create();
void index();
CELL* getInsertCellAddress();

int main() {
	int iterator;
	int inputValue;
	CELL* insertCell;

	//[手順２]先頭のセルの宣言
	CELL head;
	head.next = nullptr;
	//Visual Studioではnextに
	//何らかの値が入った状態で初期化されるので,nullptrを代入する



	return 0;
}