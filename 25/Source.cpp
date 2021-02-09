#include <iostream>;
using namespace std;
int** createMat(int, int);
void deleteMat(int**, int);
void switchMainSec(int**, int);
int main() {
	int row, col;
	cout << "Enter matrix' row size: ";
	cin >> row;
	cout << "Enter matrix column size: ";
	cin >> col;
	switchMainSec(createMat(row, col), row);

	return 0;
}


int** createMat(int row, int col) {
	int** mat = new int* [row];

	for (int i = 0; i < row; i++)
		mat[i] = new int[col];

	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++) {
			mat[i][j] = rand() % 100;
		}
	for (int i = 0; i < row; i++) {
		cout << endl;
		for (int j = 0; j < col; j++) {
			cout << mat[i][j] << " ";
		}
	}
	cout << endl;
	return mat;
}

void deleteMat(int** p, int row) {
	for (int i = 0; i < row; i++) delete[] p[i];
	delete[] p;
}

void switchMainSec(int** mat, int row) {
	int temp,j;
	for (int i = 0; i < row; i++) {
		temp = mat[i][i];
		j = row - i - 1;
		mat[i][i] = mat[i][j];
		mat[i][j] = temp;
	}
	for (int i = 0; i < row; i++) {
		cout << endl;
		for (int j = 0; j < row; j++) {
			cout << mat[i][j] << " ";
		}
	}
	deleteMat(mat, row);
}