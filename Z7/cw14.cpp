#include "/Users/dimazhylko/CPPProjects/bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

const int N=8;

int C[N],P1[2*N],P2[2*N];
int res = 0;

void check(int c){
	if(c==8){
		res++;
		return;
	}

	for(int i = 0;i<N;i++){
		if(C[i]==0 && P1[c-i+N]==0 && P2[c+i]==0){
			C[i]=P1[c-i+N]=P2[c+i]=1;
			check(c+1);
			C[i]=P1[c-i+N]=P2[c+i]=0;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    check(0);
    cout<<res<<endl;

	return 0;
}