#include "/Users/dimazhylko/CPPProjects/bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

const int N = 4;

int v1=0,v2=0,v3=0;
int c=0;

int waga(int n){
	if(n==1)return 0;
	int res = 0;
	for(int i = 2;i*i<=n;i++){
		if(n%i==0){
			while(n%i==0)n/=i;
			res++;
		}
	}
	return res + (n!=1);
}

bool div(int *T){
	c++;
	if(c==N+1){
		c--;
		if(v1==v2 && v2==v3)return true;
		else return false;
	}

	int w = waga(*T);

	v1+=w;
	if(div(T+1))return true;
	v1-=w;

	v2+=w;
	if(div(T+1))return true;
	v2-=w;

	v3+=w;
	if(div(T+1))return true;
	v3-=w;

	c--;
	return false;
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
	
	int t[N];

	for(int i = 0;i<N;i++){
		cin>>t[i];
	}

	if(div(t))cout<<"TAK"<<endl;
	else cout<<"NIE"<<endl;

	return 0;
}