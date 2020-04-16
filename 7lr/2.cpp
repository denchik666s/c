#include <iostream> 
using namespace std;

struct Student
{
	char name[64];
	int p1;
	int p2;
	int p3;
};

void showData(const Student Obj[], int n);
int main()
{
	const int n = 25;
	Student Stud[n] = {};

	for (int i = 0; i < n; i++)
	{
		cout << "Имя: ";
		cin.getline(Stud[i].name, 32);
		cout << "Предмет 1 (1-так, 0- ні): ";
		cin >> Stud[i].p1;
		cout << "Предмет 2 (1-так, 0- ні): ";
		cin >> Stud[i].p2;
		cout << "Предмет 3 (1-так, 0- ні): ";
		cin >> Stud[i].p3;
		cin.get(); 
		cout << endl;
	}
	showData(Stud, n);
	return 0;
}

void showData(const Student Obj[], int n)
{
	cout << "№\t" << "Имя\t" << "П1\t" << "П2\t" << "П3"<< endl;
	cout << "=============================================" << endl;
	for (int i = 0; i < n; i++)
	{
		if ((Obj[i].p1+ Obj[i].p2+ Obj[i].p3)<2) {
		
		 cout << i + 1 << '\t' << Obj[i].name << '\t' << Obj[i].p1
			<< '\t' << Obj[i].p2 << '\t' << Obj[i].p3<< endl;
		}
	}
}

