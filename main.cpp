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

	//[�菇�Q]�擪�̃Z���̐錾
	CELL head;
	head.next = nullptr;
	//Visual Studio�ł�next��
	//���炩�̒l����������Ԃŏ����������̂�,nullptr��������



	return 0;
}