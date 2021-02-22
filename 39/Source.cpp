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
void setLine(Line& line, Point& p1, Point& p2);
void printPoint(Point& p);
void printLine(Line& line);
void lineCross(Line& line1, Line& line2);

int main()
{
	Point a, b, c, d;
	setPoint(a);
	setPoint(b);
	setPoint(c);
	setPoint(d);
	Line A, B;
	setLine(A, a, b);
	printLine(A);
	setLine(B, c, d);
	printLine(B);
	lineCross(A, B);

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

void lineCross(Line& line1, Line& line2)
{
	Point m1 = line1[0];
	Point m2 = line1[1];
	Point n1 = line2[0];
	Point n2 = line2[1];
	float a1 = 0, a2 = 1, b1 = 2, b2 = 3; // y = ax + b
	
	if (m1.x != m2.x) // a = (y2-y1)/(x2-x1) & b = (y1x2 - x1y2) / (x2 - x1)
	{
		a1 = (float)(m2.y - m1.y) / (float)(m2.x - m1.x);
		b1 = (float)(m1.y * m2.x - m1.x * m2.y) / (float)(m2.x - m1.x);
	};
	if (n1.x != n2.x)
	{
		a2 = (float)(n2.y - n1.y) / (float)(n2.x - n1.x);
		b1 = (float)(n1.y * n2.x - n1.x * n2.y) / (float)(n2.x - n1.x);
	};
	if ((m1.x == m2.x && n1.x == n2.x && m1.x == n1.x) || (m1.y == m2.y && n1.y == n2.y && m1.y == n1.y)) // if m and n lines are vertical to x or y
	{
		cout << endl << "Lines do cross.";
		return;
	}
	if (a1 != a2)
	{
		cout << endl << "Lines do cross.";
		return;
	};
	if (b1 == b2)
	{
		cout << endl << "Lines do cross.";
		return;
	}
	else
	{
		cout << endl << "Lines do not cross.";
		return;
	}
	
}