#include <iostream>;
#include <time.h>;
using namespace std;

struct Point 
{
	int x;
	int y;
};

void setPoint(Point& p);
void printPoint(Point& p);

int main() 
{
	Point p;
	setPoint(p);
	printPoint(p);

	return 0;
}

void setPoint(Point& p) 
{
	Point* pt = &p;
	pt->x = rand() % 100;
	pt->y = rand() % 100;
}

void printPoint(Point& p)
{
	Point* pt = &p;
	cout << endl;
	cout << "Coordinates:" << endl;
	cout << "x: " << pt->x;
	cout << ", " << "y: " << pt->y << endl;
}
