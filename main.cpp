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

	//[�菇�Q]�擪�̃Z���̐錾
	CELL head;
	head.next = nullptr;
	//Visual Studio�ł�next��
	//���炩�̒l����������Ԃŏ����������̂�,nullptr��������

	while (1) {
		printf("[�v�f�̑���]\n");
		printf("1.�v�f�̕\��\n");
		printf("2.�v�f�̑}��\n");
		if (head.prev != nullptr) {
			printf("3.�v�f�̕ҏW\n");
			printf("4.�v�f�̍폜\n");
		}
		printf("5.�v�f�̕��ёւ�\n");
		scanf_s("%d", &operation);
		scanf_s("%d", &iterator);
		printf("�}������l����͂��Ă�������\n");
		scanf_s("%d", &inputValue);
		//[�菇�R]�C�ӂ̃Z���̌��ɒǉ�
		insertCell = getInsertCellAddress(&head, iterator);
		create(insertCell, inputValue);

		//[�菇4]���X�g�ꗗ�̕\��
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
