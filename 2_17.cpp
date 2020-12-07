#include <iostream>
#include <cmath>
using namespace std;
float sum, x, y;
int n, i;
int main()
{
    setlocale(LC_ALL, "Rus");
    sum = 1;
    y = 1;
    cout << "Длина последовательности = ";
    cin >> n;
    cout << endl;
    cout << "X =  ";
    cin >> x;
    if (n == 1)
    {
        cout << sum;
    }
    if (n == 0)
    {
        cout << 0;
        goto skip;
    }
    if ((n != 0) && (n != 1))
    {
        for (int i = 2; i <= n; i++)
        {
            sum = sum + pow(x, i - 1) / y;
            y = y * i;
        }
    }
    cout << "Сумма =  ";
    cout << sum;
skip:
    return 0;
}
