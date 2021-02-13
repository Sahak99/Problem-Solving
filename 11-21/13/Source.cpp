#include <iostream>;
#include <math.h>;
using namespace std;
void minMax(int);

int main() {
	int num;
	cout << "Enter a number: ";
	cin >> num;
	minMax(num);
	return 0;
}

void minMax(int number) {
	int arr[10];
	int temparr[10];
	int temp=1,i=0,j=10,count=0;

	while (temp != number) {
		temp = number % j;
		j *= 10;
		arr[i] = temp;
		count++;
		i++;
	}

	for (i = 1; i < count; i++){
		j = i - 1;
		while (j>=0) {
			arr[i] = arr[i] - arr[j];
			j--;
		}
	}

	for (i = 0; i < count; i++) {
		arr[i] = arr[i] / pow(10, i);
	}
	int min, max;
	min = arr[0];
	max = arr[0];
	for (i = 0; i < count; i++) { 
		if (min < arr[i]) min = arr[i];
		if (max > arr[i]) max = arr[i];


		cout << arr[i] << " "; }
	cout << "Min: " << min << ", Max:" << max << endl;

	
}