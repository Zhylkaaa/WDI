#include "/Users/dimazhylko/CPPProjects/bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

const int N=6;
int t[N];
int c=0;

bool find(int n, int k, int i){
	if(n==1 && k==0){
		c++;
		cout<<endl;
		return true;
	}
	if(i==N)return false;

	bool res = find(n,k,i+1);
	if(n%t[i]==0){
		if(find(n/t[i],k-1,i+1)){
			cout<<t[i]<<" ";
			return true;
		}
	}

	return res;
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;
    for(int i = 0;i<N;i++){
    	cin>>t[i];
    }
    cin>>n>>k;
    find(n, k, 0);

    cout<<endl<<c<<endl;

	return 0;
}