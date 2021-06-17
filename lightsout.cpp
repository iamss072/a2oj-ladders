#include <bits/stdc++.h> 
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 

int main()
{
    fast_io;
    int val;
    int lights[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>val;
            lights[i][j]=val;
        }
    }
    int state[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            state[i][j]=lights[i][j];
            if(i-1>=0) state[i][j]+=lights[i-1][j];
            if(i+1<3) state[i][j]+=lights[i+1][j];
            if(j-1>=0) state[i][j]+=lights[i][j-1];
            if(j+1<3) state[i][j]+=lights[i][j+1];

            if(state[i][j]%2==0) state[i][j]=1;
            else state[i][j]=0;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<state[i][j];
        }
        cout<<endl;
    }
    return 0;
}