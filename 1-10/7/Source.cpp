#include <iostream>;
using namespace std;
void removeVowels(char* );

int main() {
	char name[20];
	cin.getline(name, 20);
	removeVowels(name);
	return 0;
}

void removeVowels(char* ch) {
	int counter = 0;
	while (ch[counter]) {
		if (ch[counter] != 'A' && ch[counter] != 'a' && ch[counter] != 'E' && ch[counter] != 'e' && ch[counter] != 'I' && ch[counter] != 'i'
			&& ch[counter] != 'O' && ch[counter] != 'o' && ch[counter] != 'U' && ch[counter] != 'u')
			cout << ch[counter];
		counter++;
	}
}