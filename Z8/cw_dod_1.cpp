#include "/Users/dimazhylko/CPPProjects/bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

//Z.D. zklepanie listów

struct node {
	int val;
	node* next=NULL;
};

struct l {
	node* head;
	node* tail;
};

/*void append(int val, l &lista){
	node *el = new node;
	if(el == NULL)return false;
	el->val = val;
	if(lista.head == NULL){
		lista.head = el;
	} else {
		lista.tail->next = el;
	}
	lista.tail = el;
	return true;
}*/

// albo 

bool append(int val, node *&first){
	node *el = new node;
	if(el==NULL)return false;
	el->val = val;
	el->next = NULL;
	if(first==NULL){
		first = el;
		return true;
	} else {
		node* tmp = first;
		while(tmp->next!=NULL)tmp=tmp->next;
		tmp->next=el;
		return true;
	}
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);



	return 0;
}