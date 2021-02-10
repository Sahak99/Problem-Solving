#include <iostream>;
#include <time.h>;
using namespace std;

int* createArray(int);
int** createMatrix(int, int);
void matrixToArray(int**, int*,int ,int);
void deleteArray(int*);
void deleteMatrix(int**,int);

int main() {
	int row, col;
	cout << "Enter the matrix row length: ";
	cin >> row;
	cout << "Enter the matrix column length: ";
	cin >> col;
	int** mat = createMatrix(row, col);
	int* arr = createArray(row * col);
	matrixToArray(mat, arr, row, col);
	deleteMatrix(mat,col);
	deleteArray(arr);
	return 0;
}

int* createArray(int length) {
	int* p = new int[length];
	cout << "The Array: " << endl;
	for (int i = 0; i < length; i++) {
		p[i] = rand() % 100;
		cout << p[i] << " ";
	}
	cout << endl;
	return p;
}

int** createMatrix(int row, int col) {
	int** p = new int* [col];
	cout << "The Matrix: ";
	for (int i = 0; i < col; i++)
		p[i] = new int[row];
	for (int i = 0; i < col; i++) {
		cout << endl;
		for (int j = 0; j < row; j++) {
			p[i][j] = rand() % 100;
			cout << p[i][j] << " ";
		}
	}
	cout << endl;
	return p;
}
void matrixToArray(int** mat, int* arr,int row,int col) {
	int k = 0;
	for(int i = 0; i < col; i++)
		for (int j = 0; j < row; j++) {
			arr[k] = mat[i][j];
			k++;
		}
	cout << endl << "Matrix into Array: " << endl;
	for (int i = 0; i < k; i++) cout << arr[i] << " ";
}
void deleteArray(int* p) {
	delete[] p;
}

void deleteMatrix(int** p, int col) {
	for (int i = 0; i < col; i++) {
		delete[] p[i];
	}
	delete[] p;
}