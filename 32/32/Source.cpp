#include <iostream>;
using namespace std;
void findSequence(char*);

int main() {
	char str[30];
	cout << "Enter a string: ";
	cin >> str;
	findSequence(str);
}

void findSequence(char* str) {
	int length = 0;
	int seqInd = 0;
	int maxSeq = 0;
	while (str[length]) length++;
	int* seq = new int[length];
	for (int i = 0; i < length; i++)
		if ((str[i] == str[i + 1]) || (str[i - 1] == str[i])) {
			seq[seqInd] = i;
			seqInd++;
		}
	
}



