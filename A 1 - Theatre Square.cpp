#include <iostream>

using namespace std;

int main ()
{
    long long n,m,a;

    cin >> n >> m >> a;

    if (n%a==0)
        {
        if (m%a==0)
            {
            cout << (n/a)*(m/a);
            }
        else
            {
            cout << (n/a)*((m/a)+1);
            }
        }
    else
        {
        if (m%a==0)
            {
            cout << ((n/a)+1)*(m/a);
            }
        else
            {
            cout << ((n/a)+1)*((m/a)+1);
            }
        }

    return 0;
}
