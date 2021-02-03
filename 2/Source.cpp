#include <iostream>;
using namespace std;
void revPrint(char*);

int main() {
	char num[10];
	cin >> num;
	revPrint(num);
	return 0;
}

void revPrint(char* ch)
{	
	char* p = ch;
	int count = 0;
	while (p[count]) count++;
	while(count) {
		cout << *(p + count-1) << ", ";
		--count;
	}
}
