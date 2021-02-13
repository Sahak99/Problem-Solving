#include <iostream>;
#include <cstring>;
using namespace std;
void revName(char*);

int main() {
	char name[20];
	cout << "Enter your full name: ";
	cin.getline(name,20);
	revName(name);
	return 0;
}

void revName(char* ch) {
	int counter = 0;
	while (ch[counter]) {
		counter++;
	}
	cout << "Haha reverse: ";
	while (counter+1) {
		cout << ch[counter];
		counter--;
	}
}