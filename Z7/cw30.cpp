#include "/Users/dimazhylko/CPPProjects/bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int n=0;
int c=0;

bool isPrim(int m){
	if(m==2 || m==1)return true;
	for(int i=2;i*i<=m;i++){
		if(m%i==0)return false;
	}
	return true;
}

void find(int a, int b){
	if(b==0 && a==0){
		if(!isPrim(n))c++;
		return;
	}

	if(a>0){
		n+=1<<(a+b-1);
		find(a-1,b);
		n-=1<<(a+b-1);
	}
	if(b>0){
		find(a,b-1);
	}
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int a,b;
    cin>>a>>b;

    n=1<<(a+b-1);

    find(a-1,b);

    cout<<c<<endl;
	return 0;
}