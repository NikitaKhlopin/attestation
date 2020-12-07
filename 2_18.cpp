#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int n, m = 0;
    cout << "Введите число = " << endl;
    cin >> n;
    while (n != 0) 
    {
        m *= 10;
        m += n % 10;
        n = n / 10;
    }
    cout << "Число наоборот = " << m << endl;
    return 0;
}
