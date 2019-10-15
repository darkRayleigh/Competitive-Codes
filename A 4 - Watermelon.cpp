#include <iostream>

using namespace std;

int weight;

int main()
{
    cin >> weight;
    if (weight==2)
        {
        cout << "NO";
        }
    else
        {
        weight=weight%2;
        if (weight==0)
            {
            cout << "YES";
            }
        else
            {
            cout << "NO";
            }
        }
    return 0;
}
