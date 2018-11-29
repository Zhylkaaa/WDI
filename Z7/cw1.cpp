// Problem skoczka szachowego (treść oczywista)

#include "/Users/dimazhylko/CPPProjects/bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int P[5][5];
int c=0;

bool check(int row, int col){
	if(row>=5 || row<0 || col>=5 || col<0 || P[row][col]!=0)return false;
	c++;
	P[row][col]=c;
	if(c==25)return true;

	for(int i = 1;i<=2;i++){
		for(int j=2;j>=1;j--){
			if(i==1 && j==1)continue;
			if(check(row+i, col+j) ||
				check(row+i, col-j) ||
				check(row-i, col+j) ||
				check(row-i, col-j)) return true;
		}
	}

	P[row][col] = 0;
	c--;
	return false;
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
	
	int r,c;
	cin>>r>>c;

	if(check(r,c)){
		cout<<"Yes"<<endl;
	} else {
		cout<<"No"<<endl;
	}

	for(int i = 0;i<5;i++){
		for(int j=0;j<5;j++){
			cout<<P[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}