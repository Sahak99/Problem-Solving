#include <iostream>;
using namespace std;
void findMostCommon(char*);
void setAlphabet(char*);
void findMax(int*,int,char*);

int main() {

	char str[30];
	cout << "Enter a sentence: ";
	cin.getline(str, 30);
	findMostCommon(str);
	return 0;
}

void findMostCommon(char* str) {
	int count = 0;
	while (str[count]) {
		str[count] = tolower(str[count]);
		count++;
	}
	char alphabet[26];
	int values[26] = {0};
	setAlphabet(alphabet);
	for (int i = 0; i < count; i++) {
		for (int j = 0; j < 26; j++)
			if (str[i] == alphabet[j])values[j]++;
	}
	for (int i = 0; i < 26; i++)cout << alphabet[i] << " ";
	cout << endl;
	for (int i = 0; i < 26; i++)cout << values[i] << " ";
	findMax(values,26,alphabet);

}

void setAlphabet(char* alphabet) {
	alphabet[0] = 'a';
	for (int i = 1; i < 26; i++)
		alphabet[i] = (char)(alphabet[i - 1] + 1);

}

void findMax(int* values, int len,char* alphabet) {
	int max = 0;
	int ind = 0;
	for (int i = 0; i < len; i++) 
		if (max < values[i]) {
			max = values[i];
		}
	for(int i = 0; i < len; i++)
		if(max==values[i]){
			ind++;
		}
	int k = 0;
	int* maxind = new int[ind];
	for (int i = 0; i < len; i++)
		if (max == values[i]) {
			maxind[k] = i;
			k++;
		}
	cout << "Max: " << max << ", MaxIndex: ";
	for (int i = 0; i < k; i++) cout << maxind[i] << " ";
	cout << endl<<"The most common simbols are: ";
	for (int i = 0; i < k; i++) cout << alphabet[maxind[i]] << " ";

}