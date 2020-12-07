#include<iostream>
#include <cmath>
using namespace std;
int a,b,c;
double x1, x2, D;
int main()
{
    setlocale(LC_ALL, "Rus");
    cin >> a >> b >> c;
    D = b * b - (4 * a * c);
    if (D >= 0)
    {
        x1 = ((-b + sqrt(D)) / (2 * a));
        x2 = ((-b - sqrt(D)) / (2 * a));
        cout << "Корни уравнения:";
        cout << x1 << endl;
        cout << x2 << endl;
    }
    if (D < 0)
    {
        cout << "Корней нет";
    }
    return 0;
}
