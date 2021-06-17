#include <bits/stdc++.h> 
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 

int main()
{
    fast_io;
    int n,x,y;
    cin>>n;
    unordered_map<int,int> xs;
    unordered_map<int,int> ys;
    vector<int> xp;
    vector<int> yp;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        xp.push_back(x);
        yp.push_back(y);
        xs[x]=y;
        ys[y]=x;
    }
    int ans=0;
    
    for(int i=0;i<n;i++){
        bool up=false;
        bool down=false;
        bool left=false;
        bool right=false;
        for(int j=0;j<n;j++){
            if(xp[j]==xp[i]){
                if(yp[j]>yp[i]) up=true;
                if(yp[j]<yp[i]) down=true;
            }
            else if(yp[j]==yp[i]){
                if(xp[j]<xp[i]) left=true;
                if(xp[j]>xp[i]) right=true;
            }
        }
        if(up && down && right && left) ans++;
        
    }
    cout<<ans<<endl;
    return 0;
}