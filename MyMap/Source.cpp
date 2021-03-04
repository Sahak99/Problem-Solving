#include <iostream>;
using namespace std;
template<typename T>
class MyMap 
{
private:
	struct Node
	{
		T data;
		Node* left;
		Node* right;
		Node()
		{
			left = nullptr;
			right = nullptr;
			data = NULL;
		}
		Node(T elem)
		{
			left = nullptr;
			right = nullptr;
			data = elem;
		}
	};
	Node* root;
	int size = 0;
public:
	void push(T elem)
	{
		if (size == 0)
		{
			Node* tmp = new Node(elem);
			root = tmp;
			size++;
			return;
		}
		Node* cur = root;
		while(cur!=nullptr)
		{
			if (cur->data < elem)
			{
				if (cur->right == nullptr)
				{
					Node* tmp = new Node(elem);
					cur->right = tmp;
					size++;
					return;
				}
				else cur = cur->right;
			}
			else if (cur->data > elem)
			{
				if (cur->left == nullptr)
				{
					Node* tmp = new Node(elem);
					cur->left = tmp;
					size++;
					return;
				}
				else cur = cur->left;
			}
		}
	}
};

int main()
{
	MyMap<int> mp;
	mp.push(10);
	mp.push(20);
	mp.push(15);



	return 0;
}