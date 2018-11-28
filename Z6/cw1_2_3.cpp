#include "/Users/dimazhylko/CPPProjects/bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

const int N = 10;

int T[N];

bool can(int n, int c){
    if(n==0)return true;
    if(n<0)return false;
    
    if(c<N-1){
        if(can(n-T[c],c+1)){
            cout<<T[c]<<" L"<<endl;
            return true;
        }
        if(can(n,c+1))return true;
        if(can(n+T[c],c+1)){
            cout<<T[c]<<" R"<<endl;
            return true;
        }
    } else {
        if(n-T[c]==0){
            cout<<T[c]<<" L"<<endl;
            return true;
        }
    }
    return false;
    
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    for(int i = 0;i<N;i++){
        cin>>T[i];
    }
    
    int n;
    cin>>n;
    
    if(can(n,0)==true){
        cout<<"TAK"<<endl;
    } else {
        cout<<"NIE"<<endl;
    }
    return 0;
}
