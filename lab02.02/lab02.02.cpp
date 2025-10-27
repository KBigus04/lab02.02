#include <iostream>
using namespace std;

//zad11
/*int main() {
	int a,b;
	cout << "Podaj wartosc a: ";
	cin >> a;
	cout << "\nPodaj wartosc b: ";
	cin >> b;
	if (a == b) {
		cout << "\nWartosci a i b musza byc od siebie ro¿ne!";
	}
	else if (a < b) {
		for (int i = a; i <= b; i++) {
			if (i % 3 == 0) {
				cout << i << endl;
			}
		}
	}
	else {
		for (int i = b; i <= a; i++) {
			if (i % 3 == 0) {
				cout << i << endl;
			}
		}
	}
}*/

//zad12
int main() {
	int n;
	float l, suma = 0;
	cout << "Podaj ilosc liczb do sredniej arytmetycznej: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "\nPodaj liczbe: ";
		cin >> l;
		suma = l + l;
	}
	cout << "\nSrednia arytmetyczna n liczb wprowadzonych z klawiatury to: " << suma / n;
}
