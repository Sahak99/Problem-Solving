#include <iostream>;
using namespace std;
void toUpper(char*);

int main() {
	char str[20];
	cout << "Enter your name: ";
	cin.getline(str, 20);
	toUpper(str);
	return 0;
}

void toUpper(char* str) {
	int counter = 0;
	while (str[counter]) {
		cout << (char) toupper(str[counter]);
		counter++;
	}
}