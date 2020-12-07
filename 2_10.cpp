#include <iostream>
using namespace std;
int n, a;
int main()
{
    setlocale(LC_ALL, "Rus");
   int  max = 0;
    cout << "Введите кол-во элементов: ";
    cout << endl;
    cin >> n;
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        if (a >= max)
        {
            max = a;
        }
    }
    cout << "max элемент массива: ";
    cout << endl;
    cout << max;
    return 0;
}
