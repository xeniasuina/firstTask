#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	int n;
	cout << "Введите число ";
	cin >> n;
	if (n < 0) {
		n = -n;
	}
	if (n >= 100 && n <= 999) {
		cout << "Введенное число трехзначное ";
	}
	else {
		cout << "Введенное число не трехзначное ";
	}
}
