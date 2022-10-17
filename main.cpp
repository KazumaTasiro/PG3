#include <stdlib.h>
#include <stdio.h>

template<typename Tipe>

Tipe Min(Tipe a, Tipe b) {
	if (a >= b) {
		return b;
	}
	return a;
}
template<>
char Min<char>(char a, char b) {
	return 0;
}

int main() {
	if (Min<char>('1', '2') == 0) {
		printf("”šˆÈŠO‚Í‘ã“ü‚Å‚«‚Ü‚¹‚ñ");
	}
	printf("%d\n", Min<int>(5,6));
	printf("%f\n", Min<float>(5.5f, 4.5));
	printf("%f\n", Min<double>(5.4, 2.2));
	return 0;
}