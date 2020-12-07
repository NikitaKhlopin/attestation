#include <iostream>
using namespace std;
int n;
int chislo;
int a;
bool flag;
int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "¬ведите кол-во элементов:";
    cout << endl;
    cout << endl;
    cin >> n;
    cout << "¬водите элементы последовательности: ";
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        if (a == 0)
        {
            flag = false;
        }
        if (a > 0)
        {
            cout << ">0";
            flag = true;
            break;
        }
        if (a < 0)
        {
            cout << "<0";
            flag = true;
            break;
        }
    }
    if (flag == false)
    {
        cout << "0";
    }
    return 0;
}