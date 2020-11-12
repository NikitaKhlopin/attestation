#include <iostream>
using namespace std;
#include <cmath>
int n, sum, p;
int main()
{
	sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		p = 1;
		for (int j = i; j <= i * 2; j++)
		{
			p *= j;
		}
		sum += p;
	}
	cout << sum;
	return 0;
}
