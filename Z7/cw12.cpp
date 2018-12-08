#include "/Users/dimazhylko/CPPProjects/bits/stdc++.h"
//#include <bits/stdc++.h>
#include <string>
using namespace std;
typedef long long ll;
typedef long double ld;

int c=0;

void podzial(int n, int p, string s){
	if(n==1){
		cout<<"1" + s<<endl;
	}
	else {
		for(int i = p;i<n;i++){
			podzial(n-i,i,s+" + "+to_string(i));
		}
	}
}

int main(){
	//ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
    //cout.tie(NULL);
	
	int n;
	cin>>n;
	string s = "";
	podzial(n,1,s);

	return 0;
}