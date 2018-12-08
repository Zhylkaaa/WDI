#include "/Users/dimazhylko/CPPProjects/bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int T[20];
int l=0;
int res=0;

void solve(int i, int c){
	if(i==l){
		if(c!=1)res+=c;
		return;
	}

	solve(i+1, c);
	solve(i+1, c*T[i]);
}

void find(int n){
	if(n%2==0)T[l++]=2;
	while(n%2==0)n/=2;
	for(int i=3;i<=n;i++){
		if(n%i==0){
			T[l++]=i;
			while(n%i==0)n/=i;
		}
	}
	if(n!=1)T[l++]=n;

	solve(0,1);
	cout<<res<<endl;
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
	
	int n;
	cin>>n;

	find(n);
	return 0;
}