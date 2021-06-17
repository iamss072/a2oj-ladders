#include <bits/stdc++.h> 
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 

int main()
{
    fast_io;
    int n,val;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++){
        cin>>val;
        arr[i]=val;
    }
    // sort(arr.begin(),arr.end());
    int min=abs(arr[0]-arr[n-1]);
    int x=n;
    int y=1;
    for(int i=0;i<n;i++){
        int j=(i+1)%n;
        if(abs(arr[j]-arr[i])<min){
            x=i+1;
            y=j+1;
            min=abs(arr[j]-arr[i]);
        }
    }
    cout<<x<<" "<<y<<endl;
    return 0;
}