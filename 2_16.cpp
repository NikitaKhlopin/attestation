#include <iostream>
using namespace std;
int n,s;
int main()
{
    s = 0;
    cin >> n; //���������� ����� � ������������������
    for (int i = 1; i <= n; i++)
    {
        if ((i % 2) == 1)
        {
            s = s - i;
        }
        else
        {
            s = s + i;
        }
    }
    cout << "����� = ";
    cout << s;
    return 0;
}