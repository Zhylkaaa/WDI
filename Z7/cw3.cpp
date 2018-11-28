#include "/Users/dimazhylko/CPPProjects/bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int T[6];
int best = 7;
int res = 0;
int c=0;

void check(int T[], int i, int sum, int sumi){
	if(sum!=0 && sum == sumi){
		cout<<sum<<" "<<c<<endl;
		if(best>c){
			best=c;
			res = sum;
		}
		return;
	}
	if(i>=6)return;
	c++;
	check(T, i+1, sum+T[i], sumi+i);
	c--;
	check(T, i+1, sum, sumi);
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i = 0;i<6;i++){
    	cin>>T[i];
    }

    check(T,0,0,0);

    if(best==7)cout<<-1<<endl;
    else cout<<res<<endl;
	return 0;
}