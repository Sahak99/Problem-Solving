#include <iostream>;
using namespace std;
void drawTriangle();
void drawHouse();
int main() {
	drawTriangle();
	cout << endl;
	drawHouse();
	return 0;
}

void drawTriangle() {
	for (int i = 0; i < 5; i++) {
		cout << endl;
		for (int j = 5-i; j > 0; j--) cout << " ";
		for (int k = 0; k < 2*i+1; k++) cout << "*";
	}
}

void drawHouse() {
	drawTriangle();
	for( int i = 0; i < 5; i++){
		cout << endl;
		for (int j = 0; j < 5; j++) {
			if (i == 0 || j == 4 || i == 4 || j == 0)cout << " =";
			else cout << "  ";
		}
	}
}