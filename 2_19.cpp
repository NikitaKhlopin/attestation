#include <iostream>
using namespace std;
int n;
int sum;
int main()
{
    setlocale(LC_ALL, "Rus");
    sum = 0;
    cout << "������� ���-�� ����� = ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if ((i % 3) == 0)
        {
            sum = sum - i;
        }
        else
        {
            sum = sum + i;
        }
    }
    cout << "����� ������������������ ����� = ";
    cout << sum;
    return 0;
}
