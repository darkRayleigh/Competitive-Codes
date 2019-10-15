//Galatians 4:16

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int s,i,e;
    while(t--)
    {
        cin>>s>>i>>e;
        s+=e;
        if(s<=i) cout<<0;
        else
        {
            cout<<ceil(float(s-i)/2);
        }
    cout<<endl;
    }
    return 0;
}

