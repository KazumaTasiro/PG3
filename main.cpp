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

	//[è‡‚Q]æ“ª‚ÌƒZƒ‹‚ÌéŒ¾
	CELL head;
	head.next = nullptr;
	//Visual Studio‚Å‚Ínext‚É
	//‰½‚ç‚©‚Ì’l‚ª“ü‚Á‚½ó‘Ô‚Å‰Šú‰»‚³‚ê‚é‚Ì‚Å,nullptr‚ğ‘ã“ü‚·‚é



	return 0;
}