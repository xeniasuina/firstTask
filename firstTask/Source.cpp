#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	int n;
	cout << "¬ведите число ";
	cin >> n;
	if (n < 0) {
		n = -n;
	}
	if (n >= 100 && n <= 999) {
		cout << "¬веденное число трехзначное ";
	}
	else {
		cout << "¬веденное число не трехзначное ";
	}
}