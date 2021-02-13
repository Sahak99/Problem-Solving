#include <iostream>;
#include <cmath>;
using namespace std;
void resSqr(float, float, float);

int main() {
	float a, b, c;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "Enter c: ";
	cin >> c;
	resSqr(a, b, c);
	return 0;
}

void resSqr(float a, float b, float c) {
	float d;
	float x1, x2;
	d = pow(b, 2) - (4 * a * c);
	if (d >= 0) {
		x1 = (float)(-b + d) / (float)(2 * a);
		x2 = (float)(-b - d) / (float)(2 * a);
		cout << "x1: ";
		printf("%f\n", x1);
		cout << endl << "x2: ";
		printf("%f\n", x2);
		cout<<endl;
	}
	else cout << "This equasion has no solution.";
}