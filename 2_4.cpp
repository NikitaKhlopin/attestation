#include <iostream>
using namespace std;
int main()
{
        int h; 
        cin >> h;
    for (int i = 1; i < h; i++)
    {
        for (int j = 0; j < h+i-2; j++)
            if (i + j > h)
            {
                cout << '*';
            }
            else
            {
                cout << ' ';
            }
            cout << "\n";
    }
    return 0;
}