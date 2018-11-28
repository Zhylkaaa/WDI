#include "/Users/dimazhylko/CPPProjects/bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

#define INF 1ll<<60

int A[8][8];
ll best = INF;
ll c = 0;

void check(int T[8][8], int row, int col){
	if(row>7 || col<0 || col>7 || best<c)return;
	c+=T[row][col];
	if(row==7){
		if(best>c){
			best = c;
		}
	} else {
		for(int i = -1;i<=1;i++){
			check(T, row+1, col+i);
		}
	}
	c-=T[row][col];
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i = 0;i<8;i++){
    	for(int j=0;j<8;j++){
    		cin>>A[i][j];
    	}
    }

    int k;
    cin>>k;

    check(A,0,k);

    cout<<best<<endl;

	return 0;
}