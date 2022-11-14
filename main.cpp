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
		printf("%dŽžŠÔ“­‚¢‚Ä“ÁŽê‚ÍŽž‹‹%d\n", hour + 1, special);
		hour++;
	}
	printf("%dŽžŠÔ“­‚¢‚Äˆê”Ê‚Æ“ÁŽê‚ÌŽž‹‹‚ª“ü‚ê‘Ö‚í‚Á‚½", hour);
	return 0;
}