#include <bits/stdc++.h> 
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 

bool isPrime(int n){

    if(n%2==0) return false;

    for(int i=3;i*i<=n;i+=2){
        if(n%i==0) {
            return false;
        }
    }
    return true;
}

int main()
{
    fast_io;
    int n,m;
    cin>>n>>m;
    if(m%2==0){
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=n+1;i<m;i++){
        if(isPrime(i)){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    if(isPrime(m)) {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}