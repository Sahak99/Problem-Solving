#include <iostream>;
using namespace std;
void mToKm(int);

int main() {
	int dist;
	cout << "Enter the distance in metres: ";
	cin >> dist;
	mToKm(dist);
	return 0;
}

void mToKm(int dist) {

	float distKm = dist/1000.0;
	cout << dist << "m = " << distKm<<"km";
}