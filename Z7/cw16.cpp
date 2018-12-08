#include "/Users/dimazhylko/CPPProjects/bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int c=0;

bool isPrime(string sn){
	int n=0;
	for(int i = 0;i<sn.length();i++){
		n=n*10 + (sn[i]-'0');
	}
	cout<<n<<endl;

	if(n==2 || n==1)return true;
	for(int i=2;i*i<=n;i++){
		if(n%i==0)return false;
	}
	return true;
}

void build(string a, string b, string res){
	if(a.length() == 0 && b.length()==0){
		if(isPrime(res))c++;
		return;
	}

	if(a.length() > 0)build(a.substr(1), b, res+a[0]);
	if(b.length() > 0)build(a, b.substr(1), res+b[0]);
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    string a,b;
    cin>>a>>b;

    build(a,b,"");

    cout<<c<<endl;
	
	return 0;
}