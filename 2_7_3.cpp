#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");


	int n = 0;
	cout << "¬ведите сторону: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "*" << " ";
	}
	for (int j = 0; j < n - 2; j++)
	{
		cout << endl << "*" << " ";
		for (int i = 1; i < n - 1; i++)
		{
			cout << "  ";
		}
		cout << "*";
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "*" << " ";
	}
	cout << endl;
	return 0;
}