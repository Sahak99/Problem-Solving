#include <iostream>;
using namespace std;
void setStudent(struct Student &stud);
void printStudent(struct Student &stud);

struct Student {
	string name;
	string surname;
	int age;
	string subject[3];
	int countSubj;
};

int main() {
	
	struct Student stud;
	setStudent(stud);
	printStudent(stud);
	return 0;
}

void setStudent(Student &stud) {
	string name, surname;
	int age;
	cout << "Enter your name: ";
	cin >> name;
	cout << "Enter your last name: ";
	cin >> surname;
	cout << "Enter your age: ";
	cin >> age;
	Student* p = &stud;
	p->name = name;
	p->surname = surname;
	p->age = age;
	string temp = "Kek";
	int i = 0;
	while ( temp != "N") {
		cout << "Enter your subject (enter N to finish): ";
			cin >> temp;
			if (temp != "N") {
				p->subject[i] = temp;
				i++;
				p->countSubj = i;
			}
	}
}

void printStudent(Student& stud) {
	Student* p = &stud;
	cout << "Name: " << p->name << endl;
	cout << "Surname: " << p->surname << endl;
	cout << "Age: " << p->age << endl;
	cout << "Subjects: " << endl;
	for (int i = 0; i < p->countSubj; i++) {
		cout << p->subject[i] << ",";
	}
}