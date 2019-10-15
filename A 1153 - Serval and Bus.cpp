//Galatians 4:16

#include <bits/stdc++.h>

#define sonic ios_base::sync_with_stdio(false); cin.tie(NULL);
#define f(i,a,b) for(int i=a;i<b;i++)
#define vi vector<int>
#define newline cout<<endl;
#define pb push_back
#define all(a) a.begin(),a.end()
#define ff first
#define ss second

typedef long long int ll;

const double pi = 3.1415926535;
ll gcd (ll a, ll b) {return ( a ? gcd(b%a, a) : b );}
ll power(ll a, ll n) {ll p = 1;while (n > 0) {if(n%2) {p = p * a;} n >>= 1; a *= a;} return p;}
ll power(ll a, ll n, ll mod) {ll p = 1;while (n > 0) {if(n%2) {p = p * a; p %= mod;} n >>= 1; a *= a; a %= mod;} return p % mod;}

using namespace std;

int main()
{
    sonic

    int n,t,s,d,minArrivalTime=INT_MAX,turn,equality,minWaitingTime=INT_MAX;
    bool flag=false;
    vi arrivalTimes;

    cin>>n>>t;
    f(i,0,n)
    {
        cin>>s>>d;
        if(s==t){flag=true;equality=i+1;}
        if(s<minArrivalTime){minArrivalTime=s;turn=i+1;}
        while(s<t) s+=d;
        arrivalTimes.pb(s);
    }
    if(flag){cout<<equality;return 0;}
    if(t<=minArrivalTime){cout<<turn;return 0;}

    f(i,0,n)
    {
        if(arrivalTimes[i]-t>=0 && arrivalTimes[i]-t<minWaitingTime){minWaitingTime=arrivalTimes[i]-t; turn=i+1;}
    }
    cout<<turn;
    return 0;
}

