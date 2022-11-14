#include<stdlib.h>
#include<stdio.h>
int RecoursiveHourlyWage(int hour) {
	if (hour == 0) {
		return 100;
	}
	return RecoursiveHourlyWage(hour - 1) * 2 - 50;
}

int main() {

	int hour = 0;
	int normal = 1072;
	int special = 0;
	while (normal > special)
	{
		special = RecoursiveHourlyWage(hour);
		printf("%d時間働いて特殊は時給%d\n", hour + 1, special);
		hour++;
	}
	printf("%d時間働いて一般と特殊の時給が入れ替わった", hour);
	return 0;
}