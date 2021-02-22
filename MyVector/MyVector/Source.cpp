#include <iostream>;
using namespace std;

template<typename T>
class MyVector 
{
private:
	int size;
	int capacity;
	T* buffer;
public:
	MyVector() 
	{
		size = 0;
		capacity = 4;
		buffer = new T[capacity];
		buffer[0] = 0;
	}

	void push_back(const T& elem)
	{
		if (size == capacity)
		{
			capacity *= 2;
			T* tmp = new int[capacity];
			for (int i = 0; i < size; ++i)
				tmp[i] = buffer[i];
			delete[] buffer;
			buffer = tmp;
		}
		buffer[size] = elem;
		size++;
	}

	T at(int index) const 
	{
		if (index >= size) 
		{ 
			cout << endl << "Out of range." << endl;
			return buffer[0];
		}
		else return buffer[index];
	}

	T& operator[](int index) const
	{
		return buffer[index];
	}

};

int main() {
	MyVector<int> vec;
	vec.push_back(1);
	cout << vec.at(0);
	vec.push_back(2);
	cout << endl << vec[1];
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);
	cout << endl << vec[4];
	cout << endl << vec.at(19);
	cout << endl << vec[19];
	return 0;
}