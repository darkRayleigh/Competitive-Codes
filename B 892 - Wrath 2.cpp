#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n+1];

    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }

    int i=n,j=n-1,d=n;

    while(j>0)
    {
         if(i-a[i]<=j)
         {
             d--;
             j--;

         }
        else
        {
            i--;
            if(j==i)
            {
              j--;
            }
        }

    }
    cout<<d;
    return 0;
}
