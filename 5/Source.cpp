#include <iostream>;
using namespace std;
void calc(int, int, char);

int main() {
	
	int num1, num2;
	char oper;
	cout << "Enter a number: ";
	cin >> num1;
	cout << "Enter another one: ";
	cin >> num2;
	cout << "Choose operation( *, /, +, -): ";
	cin>>oper;
	calc(num1, num2, oper);
	return 0;
}

void calc(int num1, int num2, char oper) {
	switch (oper) {
	case '*':
		cout << "Result: "<<num1 * num2;
		break;
	case '/':
		cout << "Result: " << num1 / num2;
		break;
	case '+':
		cout << "Result: " << num1 + num2;
		break;
	case'-':
		cout << "Result: " << num1 - num2;
		break;
	default:
		cout << "Result: " << "-_-";
	}
	
}