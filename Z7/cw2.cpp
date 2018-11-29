#include "/Users/dimazhylko/CPPProjects/bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int T[6];


bool isPrim(int l, int r){
	ll res = 0;
	ll p = 1;
	for(int i = r-1;i>=l;i--){
		res+=T[i]*p;
		p*=2;
	}
	if(res<=1)return false;
	if(res==2)return true;

	for(int i=2;i*i<=res;i++){
		if(res%i==0)return false;
	}
	return true;
}

bool check(int l, int r){
	if(l>r)return false;
	if(l==r)return true;
	for(int i = l+1;i<=l+30 && i<=r;i++){
		if(isPrim(l,i) && check(i, r))return true;
	}

	return false;
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
	
	string s;
	cin>>s;

	for(int i = 0;i<=s.length();i++){
		if(s[i]=='0')T[i]=0;
		else T[i]=1;
	}

	if(check(0,6)){
		cout<<"Yes"<<endl;
	} else {
		cout<<"No"<<endl;
	}

	return 0;
}