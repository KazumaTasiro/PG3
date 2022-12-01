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

	//[Žè‡‚Q]æ“ª‚ÌƒZƒ‹‚ÌéŒ¾
	CELL head;
	head.next = nullptr;
	//Visual Studio‚Å‚Ínext‚É
	//‰½‚ç‚©‚Ì’l‚ª“ü‚Á‚½ó‘Ô‚Å‰Šú‰»‚³‚ê‚é‚Ì‚Å,nullptr‚ð‘ã“ü‚·‚é

	while (1) {
		printf("[—v‘f‚Ì‘€ì]\n");
		printf("1.—v‘f‚Ì•\Ž¦\n");
		printf("2.—v‘f‚Ì‘}“ü\n");
		if (head.prev != nullptr) {
			printf("3.—v‘f‚Ì•ÒW\n");
			printf("4.—v‘f‚Ìíœ\n");
		}
		printf("5.—v‘f‚Ì•À‚Ñ‘Ö‚¦\n");
		scanf_s("%d", &operation);
		scanf_s("%d", &iterator);
		printf("‘}“ü‚·‚é’l‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
		scanf_s("%d", &inputValue);
		//[Žè‡‚R]”CˆÓ‚ÌƒZƒ‹‚ÌŒã‚ë‚É’Ç‰Á
		insertCell = getInsertCellAddress(&head, iterator);
		create(insertCell, inputValue);

		//[Žè‡4]ƒŠƒXƒgˆê——‚Ì•\Ž¦
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
