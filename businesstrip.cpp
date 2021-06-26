#include <bits/stdc++.h> 
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 

int main()
{
    fast_io;
    int k,v;
    cin>>k;
    vector<int> arr(12);
    for(int i=0;i<12;i++){
        cin>>v;
        arr[i]=v;
    }
    sort(arr.begin(),arr.end());
    int j=11;
    int sum=0;
    while(sum<k && j>=0){
        sum+=arr[j];
        j--;
    }
    if(sum<k){
        cout<<j<<endl;
        return 0;
    }
    cout<<(11-j)<<endl;
    return 0;
}