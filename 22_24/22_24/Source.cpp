#include <iostream>;
#include <time.h>
using namespace std;

int mainDiag(int**, int, int);
int secDiag(int**, int, int);
int** createMat(int, int);
void addMainSec(int, int);
void deleteMat(int**,int);

int main() {
	int col, row;
	cout << "Enter the number of columns: ";
	cin >> col;
	cout << "Enter the number of rows: ";
	cin >> row;
	int sum1 = mainDiag(createMat(row,col), row, col);
	int sum2 = secDiag(createMat(row, col), row, col);
	addMainSec(sum1, sum2);
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

int mainDiag(int** mat, int row, int col) {
	int sum = 0;
	if (row != col) {
		cout << "Number of Columns and Rows are not Equal"; 
		deleteMat(mat, row);
	}

 else {
		cout << "Elements on the main diagonal: ";
		for (int i = 0; i < row; i++) {
			cout << mat[i][i] << " ";
			sum += mat[i][i];
		}
		deleteMat(mat, row);
		return sum;
	}
}

int secDiag(int** mat, int row, int col) {

	if (row != col) { 
	cout << "Number of Columns and Rows are not Equal"; 
	deleteMat(mat, row);
	}
	else {
		cout << "Elements on the secondary diagonal: ";
		int j,sum = 0;
		for (int i = 0; i < row; i++) {
			j = row - i - 1;
			cout << mat[i][j] << " ";
			sum += mat[i][j];
		}
		deleteMat(mat, row);
		return sum;
	}
}

void deleteMat(int** p, int row) {
	for (int i = 0; i < row; i++) delete[] p[i];
	delete[] p;
}

void addMainSec(int sum1, int sum2) {
	cout <<endl<<"The sum of main and secondary diagonals: "<<sum1 + sum2 << endl;
}