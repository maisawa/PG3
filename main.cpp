#include <stdio.h>
#include <iostream>
#include <list>

using namespace std;

int main() {
	/*std::*/list<const char*>Sta = { "Yurakucho","Shimbashi","Hamamatsucho","Tamachi","Shinagawa","Osaki","Gotanda","Meguro","Ebisu","Shibuya","Harajuku","Yoyogi","Shinjuku","Shin-Okubo","Takadanobaba","Mejiro","Ikebukuro","Otsuka","Sugamo","Komagome","Tabata","Nippori","Uguisudani","Ueno","Okachimachi","Akihabara","Kanda","Tokyo" };

	for (auto itr = Sta.begin();
		itr != Sta.end();
		itr++)
	{
		cout << *itr << endl;
	}cout << endl;

	for (auto itr = Sta.begin(); itr != Sta.end(); itr++) {
		if (strcmp(*itr, "Nippori") == 0) {
			itr = Sta.insert(itr, "Nishi-Nippori");
			itr++;
		}
	}

	for (auto itr = Sta.begin();
		itr != Sta.end();
		itr++)
	{
		cout << *itr << endl;
	}

	cout << endl;

	for (auto itr = Sta.begin(); itr != Sta.end(); itr++) {

		if (strcmp(*itr, "Shinagawa") == 0) {
			itr = Sta.insert(itr, "Takanawa-Gateway");
			itr++;
		}
	}

	for (auto itr = Sta.begin();
		itr != Sta.end();
		itr++)
	{
		cout << *itr << endl;
	}

	return 0;
}