#include <iostream>;
using namespace std;
void decToBin(int);
void decToHex(int);

int main() {
	int num;
	int hex;
	cout << "Enter a decimal number: ";
	cin >> num;
	cout << "Now another one: ";
	cin >> hex;
	decToBin(num);
	decToHex(hex);
	return 0;
}

void decToBin(int num) {
	int resArr[10];
	int i = 0;
	int temp = num;
	while (temp != 1) {
		if (temp % 2) resArr[i] = 1;
		else resArr[i] = 0;
		i++;
		temp = temp / 2;
	}
	resArr[i] = temp;
	cout << num << " (decimal) = ";
	for (int j = i; j >= 0; j--) cout << resArr[j];
	cout << " (binary)\n";
}

void decToHex(int hex) {
	int resarr[10];
	int temp = hex;
	int res = 0;
	int i = 0;
	while(temp>=15){
	res = temp % 16;
	resarr[i] = res;
	temp = (temp - res) / 16;
	i++;
	}
	resarr[i] = temp;
	cout << hex << " (decimal) = ";
	for (int j = i; j >= 0; j--) {
		if (resarr[j] <= 9)	cout << resarr[j];
		else {
			switch (resarr[j])
			{
			case 10:
				cout << "A";
				break;
			case 11:
				cout << "B";
				break;
			case 12:
				cout << "C";
				break;
			case 13:
				cout << "D";
				break;
			case 14:
				cout << "E";
				break;
			case 15:
				cout << "F";
				break;
			default:
				cout << "0_0";
				break;
			}
		}
	}
	cout << " (hexidecimal)";
}