#include <iostream>;
#include <time.h>;
using namespace std;

struct Point
{
	int x;
	int y;

};

struct Line
{
	Point line[2];
	Point& operator[](int k) 
	{
		if (k < 2 && k >= 0)
			return this->line[k];
		else cout << "No point found";
	};
};

void setPoint(Point& p);
void setLine(Line& line,Point& p1, Point& p2);
void printPoint(Point& p);
void printLine(Line& line);

int main()
{
	Point a,b,c,d;
	setPoint(a);
	setPoint(b);
	setPoint(c);
	setPoint(d);
	Line A, B;
	setLine(A, a, b);
	printLine(A);
	setLine(B, c, d);
	printLine(B);

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

void setLine(Line& L, Point& p1, Point& p2)
{
	L[0] = p1;
	L[1] = p2;
}

void printLine(Line& L)
{
	cout << endl << "Line: ";
	printPoint(L[0]);
	printPoint(L[1]);
}