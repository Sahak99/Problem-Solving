#include <fstream>;
#include <iostream>;
#include <time.h>;
#include <string>;
#include <vector>;
using namespace std;


int get_min_of_arr(int* arr)
{
	int min = arr[0];
	int index = 0;
	for (int i = 1; i < 4; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			index = i;
		}
	}
	return index;
}

void merge(int i, int* curr, ifstream& sorted_file1, ifstream& sorted_file2, 
	ifstream& sorted_file3, ifstream& sorted_file4, ofstream& result)
{
	switch (i) 
	{
	case 0:
		result << curr[i] << endl;
		sorted_file1 >> curr[i];
		break;
	case 1:
		result << curr[i] << endl;
		sorted_file2 >> curr[i];
		break;
	case 2:
		result << curr[i] << endl;
		sorted_file3 >> curr[i];
		break;
	case 3:
		result << curr[i] << endl;
		sorted_file4 >> curr[i];
		break;
	}
}

void swap(int* xp, int* yp) 
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

int partition(vector <int>& arr, int low, int high) 
{
	int pivot = arr[high];
	int i = (low - 1);
	for (int j = low; j <= high - 1; j++) 
	{
		if (arr[j] < pivot) 
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

void quick_sort(vector <int>& arr, int low, int high) 
{
	if (low < high) 
	{
		int pi = partition(arr, low, high);
		quick_sort(arr, low, pi - 1);
		quick_sort(arr, pi + 1, high);
	}
}

void gen_rand_file()
{
	ofstream fout;
	int number;
	fout.open("C:\\Users\\sahak\\WEB\\50tnayin\\Tnayin50\\file_testing\\main.txt");
	for (int i = 0; i < 2000; i++)
	{
		number = rand();
		fout << number;
		fout << " ";
	}
	fout.close();
}

void partitioning_file() 
{
	ifstream fin("C:\\Users\\sahak\\WEB\\50tnayin\\Tnayin50\\file_testing\\main.txt");

	int i, number;
	for (i = 1; i <= 4; i++)
	{
		ofstream foutPart("C:\\Users\\sahak\\WEB\\50tnayin\\Tnayin50\\file_testing\\part" + to_string(i) + ".txt");


		for (int j = 0; j < 500; j++)
		{
			fin >> number;
			foutPart << number << ' ';
		}
		foutPart.close();
	}
	fin.close();
}

void sort_file()
{
	int number, i;
	for (i = 4; i >= 1; i--)
	{
		ifstream finPart("C:\\Users\\sahak\\WEB\\50tnayin\\Tnayin50\\file_testing\\part" + to_string(i) + ".txt");
		vector<int> v;
		int count = 0;
		while (!finPart.eof())
		{
			finPart >> number;
			v.push_back(number);
			count++;
		}
		quick_sort(v, 0, count - 1);
		finPart.close();
		ofstream foutPart("C:\\Users\\sahak\\WEB\\50tnayin\\Tnayin50\\file_testing\\part" + to_string(i) + ".txt");
		foutPart.clear();
		for (int j = 0; j < count - 1; j++)
			foutPart << v[j] << endl;
		foutPart.close();
	}
}

int main()
{
	gen_rand_file();
	partitioning_file();
	sort_file();

	ofstream foutResult("C:\\Users\\sahak\\WEB\\50tnayin\\Tnayin50\\file_testing\\result.txt");
	ifstream finPart1("C:\\Users\\sahak\\WEB\\50tnayin\\Tnayin50\\file_testing\\part1.txt");
	ifstream finPart2("C:\\Users\\sahak\\WEB\\50tnayin\\Tnayin50\\file_testing\\part2.txt");
	ifstream finPart3("C:\\Users\\sahak\\WEB\\50tnayin\\Tnayin50\\file_testing\\part3.txt");
	ifstream finPart4("C:\\Users\\sahak\\WEB\\50tnayin\\Tnayin50\\file_testing\\part4.txt");

	int curr[4];
	finPart1 >> curr[0];
	finPart2 >> curr[1];
	finPart3 >> curr[2];
	finPart4 >> curr[3];

	while (!finPart1.eof() && !finPart2.eof() && !finPart3.eof() && !finPart4.eof())
	{
		int minIndex = get_min_of_arr(curr);
		merge(minIndex, curr, finPart1, finPart2, finPart3, finPart4, foutResult);
	}

	
	return 0;
}