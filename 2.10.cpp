#include <iostream>
using namespace std;
int main(void) {

	int n;

	cout << "n: ";
	cin >> n;

	cout << '+';
	for (int i = 0; i < n*2; i++) cout << '-';
	cout << '+' << endl;
	for (int i = 0; i < n; i++) {
		cout << '|';
		for (int j = 0; j < n*2; j++) cout << ' ';
		cout << '|' << endl;
	}
	cout << '+';
	for (int i = 0; i < n * 2; i++) cout << '-';
	cout << '+';

	return 0;
}
