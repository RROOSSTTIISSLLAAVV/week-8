#include <iostream>
#include <math.h>
using namespace std;

int main(void) {

	double pi4 = 0.;
	long n;
	cout << "Number of iterations? ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		pi4 += pow(-1.0, i) / (1 + 2 * i);
	}

	cout.precision(20);
	cout << "Pi = " << (pi4 * 4.) << endl;
	return 0;
}
