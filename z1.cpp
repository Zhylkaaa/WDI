#include "/Users/dimazhylko/CPPProjects/bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int t[12];

bool cykl(int l, int t[]){
	for(int i = l;i<12;i+=l){
		for(int j=0;j<l && i+j<12;j++){
			if(t[j]!=t[j+i])return false;
		}
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i = 0;i<12;i++){
    	cin>>t[i];
    }

	for(int i = 2;i<=12/2;i++){
		if(cykl(i,t)){cout<<"YES"<<endl;break;}
	}

	return 0;
}