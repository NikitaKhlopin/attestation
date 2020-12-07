#include <iostream>
using namespace std;
int n, a, S;
int maximum = INT_MIN;
int minimum = INT_MAX;
int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "Введите количество элементов:";
    cout << endl;
    cin >> n;
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        {
            if (a > maximum)
            {
             maximum = a;
            }
            if (a < minimum)
            {
              minimum = a;
            }
        }
    }
    S = maximum + minimum;
    cout << "Сумма:";
    cout << S << endl;
    return 0;
}