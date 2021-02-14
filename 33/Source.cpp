#include <iostream>;
#include <math.h>;
using namespace std;
bool isSimple(int);

int main() {
	int number;
	cout << "Enter a number: ";
	cin >> number;
	cout << "Is " << number << " a simple number? Answer: ";
	if (isSimple(number)) cout << "True";
	else cout << "False";

	return 0;
}

bool isSimple(int number) {
	bool b = true;
	for (int i = 2; i <= sqrt(number); i++) {
		if (number % i == 0) b = false;
	}


	return b;
}