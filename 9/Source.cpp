#include <iostream>;
using namespace std;
void toUpper2(char*);

int main() {
	char str[20];
	cout << "Enter your Name: ";
	cin.getline(str, 20);
	toUpper2(str);
	return 0;
}

void toUpper2(char* str) {
	int counter1 = 0;
	int counter2 = 1;
	while (counter1 <= strlen(str) && counter2 <= strlen(str)) {
		cout << str[counter1];
		cout << (char)toupper(str[counter2]);
		counter1 += 2;
		counter2 += 2;
	}
}