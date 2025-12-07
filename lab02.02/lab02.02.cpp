#include <iostream>
#include <cstdlib>
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
/*int main() {
	int n;
	float l, suma=0;
	cout << "Podaj ilosc liczb do sredniej arytmetycznej: ";
	cin >> n;
	if (n > 0) {
		for (int i = 0; i < n; i++) {
			cout << "\nPodaj liczbe: ";
			cin >> l;
			suma = suma + l;
		}
		cout << "\nSrednia arytmetyczna n liczb wprowadzonych z klawiatury to: " << suma / n;
	}
	else {
		cout << "Liczba n musi byc dodatnia";
	}
}*/

//zad 13
/*int main() {
	for (int i = 100; i >= 0; i--) {
		cout << i << endl;
	}
}*/

//zad14
/*int main() {
	int a, b, c;
	cout << "Podaj 3 cyfry: \n";
	cin >> a;
	cin >> b;
	cin >> c;
	if (a < b && a < c) {
		cout << "Najmniejsza z liczb to: " << a;
	}
	else if (b < c) {
		cout << "Najmniejsza z liczb to: " << b;
	}
	else {
		cout << "Najmniejsza z liczb to: " << c;
	}
}*/

//zad15
/*int main() {
	int n, m, r;
	cout << "Podaj ilosc losowanych liczb (n): ";
	cin >> n;
	cout << "\nPodaj koncowa wartosc przedzialu (m): ";
	cin >> m;
	for (int i = 0; i < n; i++) {
		r = rand() % (m + 1);
		cout << r << endl;
	}
}*/

//zad16
/*int main() {
	int n,r,k=0;
	cout << "Podaj szczesliwy numerek z przedzialu [1,10]: ";
	cin >> n;
	if (n < 1 || n>10) {
		cout << "\nNumerek nie zawiera sie w przedziale!";
	}
	else {
		for (int i = 0; i < 10; i++) {
			r = rand() % 10 + 1;
			cout << r << ", ";
			if (r == n) {
				k++;
			}
		}
		cout << "\n\nTwoj szczesliwy numerek pojawil sie " << k << " razy posrod wylosowanych liczb\n";
	}
}*/
