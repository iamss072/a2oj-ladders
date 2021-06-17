#include <bits/stdc++.h> 
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 

int main()
{
    fast_io;
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int totaldrink=k*l;
    int dpp=totaldrink/(n*nl);
    int totalslices=c*d;
    int lpp=totalslices/n;
    int spp=p/(n*np);
    cout<<min(dpp,min(lpp,spp))<<endl;
    return 0;
}