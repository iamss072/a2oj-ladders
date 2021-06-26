#include <bits/stdc++.h> 
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 

int main()
{
    fast_io;
    int a,b,v;
    cin>>a;
    vector<int> arr1(a);
    for(int i=0;i<a;i++){
        cin>>v;
        arr1[i]=v;
    }
    cin>>b;
    vector<int> arr2(b);
    for(int i=0;i<b;i++){
        cin>>v;
        arr2[i]=v;
    }
    int ans=0;
    int max=0;
    for(int g1:arr1){
        for(int g2:arr2){
            if(g2%g1==0 && g2>=g1){
                if(g2/g1>max){
                    max=g2/g1;
                    ans=1;
                }
                else if(g2/g1==max){
                    ans++;
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}