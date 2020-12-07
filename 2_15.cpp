#include <iostream>
#include <string> 
using namespace std;
int z, n;
bool flag = false;
int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "Введите число = ";
    cin >> n;
    cout << endl;
    cout << "Цифра z = ";
    cin >> z;
    while (n != 0)
    {
        if ((n % 10) == z)
        {
            flag = true;
            break;
        }
        else
        {
            n = n / 10;
        }

    }
    if (flag == true)
    {
        cout << "+";
    }
    else
    {
        cout << "-";
    }
    return 0;
}
