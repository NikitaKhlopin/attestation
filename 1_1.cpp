#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	//поиск максимального значения чисел
	if (a > b && b > c) cout << "Max a = "<<a;
	else if (a < b && b > c) cout << "Max b = "<<b;
	else cout << "Max c = "<<c;
	return 0;
}