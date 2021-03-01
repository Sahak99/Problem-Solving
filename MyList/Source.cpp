#include <iostream>;
using namespace std;
template<typename T>
class MyList
{
private:
	struct Node
	{
		T payload;
		Node* next;
	};
	Node* first;
public:
	MyList() { first = NULL; }
	~MyList()
	{
		Node* tmp = first;
		while(tmp)
		{
			Node* deleteMe = tmp;
			tmp = tmp->next;
			delete deleteMe;
		}
	}
	void push_back(T elem)
	{
		Node* tmp = new Node();
		tmp->payload = elem;
		tmp->next = first;
		first = tmp;
		size++;
	}

	T at(int count)
	{
		Node* tmp = first;
		while (count)
		{
			tmp = tmp->next;
			count--;
		}
		return tmp->payload;
	}
};

int main() 
{	
	MyList<int> ml;
	ml.push_back(4);
	ml.push_back(5);
	ml.push_back(6);
	ml.at(1);
	return 0;
}