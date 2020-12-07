#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    int n;
    int sum = 0;

    cout << "¬ведите число:";
    cin >> n;

    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    cout << "—умма = " << sum << endl;

    return 0;
}