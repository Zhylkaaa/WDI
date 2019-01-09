#include "/Users/dimazhylko/CPPProjects/bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

struct node {
	string s;
	node* next;
};

bool cmp(string s1,string s2){ // zwraca true jeżeli s1 > s2 według zadania
	return s1[s1.length()-1]>s2[0];
}

bool insert(node* &first, string new_string){
	node* el = new node;
	if(el == NULL)return false;
	el->s = new_string;

	node* head = first;
	while(head->next != first && !(cmp(head->s, new_string) && cmp(new_string, head->next->s)))head=head->next;
	if(head->next == first){
		if(!(cmp(head->s, new_string) && cmp(new_string, head->next->s)))return false;
	}

	el->next = head->next;
	head->next = el;
	first = el;
	return true;
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);


	return 0;
}