#include<iostream>
using namespace std;
int n;
int main()
{
    cin >> n;
    for (int i = n; i > -1; i--)
    {
        for (int j = 0; j < n+1; j++)
        {
            if (j + i >= n)
            {
                cout << " ";
            }
            else
            {
                cout << '*';
            }

        }
        cout << "\n";
    }
    return 0;
}