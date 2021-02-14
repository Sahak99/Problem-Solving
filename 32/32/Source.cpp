#include <iostream>;
using namespace std;
void findSequence(char*);
void setAlphabet(char*);

int main() {
	char str[30];
	cout << "Enter a string: ";
	cin.getline(str,30);
	findSequence(str);
}

void findSequence(char* str) {
	int str_length = 0;
	char alphabet[26];
	int alphabet_values[26];
	for (int i = 0; i < 26; i++) {
		alphabet_values[i] = 1;
	}
	setAlphabet(alphabet);
	while (str[str_length]) {
		str[str_length] = tolower(str[str_length]);
		str_length++; 
	}
	char temp = str[0];
	for (int i = 1; i < str_length; i++) {
		if (temp == str[i]) {
			for (int j = 0; j < 26; j++)
				if (alphabet[j] == str[i]) {
					alphabet_values[j]++;
					break;
				}
		}
		else temp = str[i];
	}
	int max = 1;
	int maxIndex = 0;
	for (int i = 0; i < 26; i++) {
		if (max < alphabet_values[i]) {
			max = alphabet_values[i];
			maxIndex = i;
		}
	}
	
	cout << "Max:" << alphabet[maxIndex] << ", " << max << " times.";
}



void setAlphabet(char* alphabet) {
	alphabet[0] = 'a';
	for (int i = 1; i < 26; i++)
		alphabet[i] = (char)(alphabet[i - 1] + 1);
}
