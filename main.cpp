#include <stdlib.h>
#include <list>
#include <iostream>

using namespace std;

int main() {

	list<const char*> YamanoteLine;
	cout << "\n1970\n";
	YamanoteLine.push_back("Tokyo");
	YamanoteLine.push_back("Kanda");
	YamanoteLine.push_back("Akihabara");
	YamanoteLine.push_back("Okachimachi");
	YamanoteLine.push_back("Ueno");
	YamanoteLine.push_back("Uguisudani");
	YamanoteLine.push_back("Nippori");
	YamanoteLine.push_back("Tabata");
	YamanoteLine.push_back("Komagome");
	YamanoteLine.push_back("Sugamo");
	YamanoteLine.push_back("Otsuka");
	YamanoteLine.push_back("Ikebukuro");
	YamanoteLine.push_back("Mejiro");
	YamanoteLine.push_back("Takadanobaba");
	YamanoteLine.push_back("Shin-Okubo");
	YamanoteLine.push_back("Shinjuku");
	YamanoteLine.push_back("Yoyogi");
	YamanoteLine.push_back("Harajuku");
	YamanoteLine.push_back("Shibuya");
	YamanoteLine.push_back("Ebisu");
	YamanoteLine.push_back("Meguro");
	YamanoteLine.push_back("Gotanda");
	YamanoteLine.push_back("Osaki");
	YamanoteLine.push_back("Shinagawa");
	YamanoteLine.push_back("Tamachi");
	YamanoteLine.push_back("Hamamatsucho");
	YamanoteLine.push_back("Shimbashi");
	YamanoteLine.push_back("Yurakucho");
	for (auto itr = YamanoteLine.begin(); itr != YamanoteLine.end(); ++itr) {
		std::cout << *itr << "\n";
	}

	cout << "\n2019\n";

	for (auto itr = YamanoteLine.begin(); itr != YamanoteLine.end(); ++itr) {
		if (*itr == "Tabata") {
			YamanoteLine.insert(itr, "Nishi-Nippori");
		}
	}

	for (auto itr = YamanoteLine.begin(); itr != YamanoteLine.end(); ++itr) {
		std::cout << *itr << "\n";
	}

	cout << "\n2022\n";

	for (auto itr = YamanoteLine.begin(); itr != YamanoteLine.end(); ++itr) {
		if (*itr == "Tamachi") {
			YamanoteLine.insert(itr, "TakanawaGateway");
		}
	}

	for (auto itr = YamanoteLine.begin(); itr != YamanoteLine.end(); ++itr) {
		std::cout << *itr << "\n";
	}


	system("pause");
	return 0;
}