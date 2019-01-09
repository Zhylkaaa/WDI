#include <iostream>
 
using namespace std;
 
struct node{
    int val;
    node* next;
};
 
bool find(int n, node* first){
    int c=0;
    while(first!=NULL){
        if(first->val==n){
            c++;
            if(c>1)return true;
        }
        first=first->next;
    }
    return false;
}
 
void remove(int n, node* &first){
    node* tmp;
    node* el;
    while(first!=NULL && first->val==n){
        tmp = first;
        first=first->next;
        delete tmp;
    }
 
    tmp=first;
    while(tmp!=NULL && tmp->next!=NULL){
        if(tmp->next->val == n){
            el = tmp->next;
            tmp->next = el->next;
            delete el;
        } else {
            tmp = tmp->next;
        }
    }
}
 
void check(node* &first){
    if(first->next==first)return;
    int n;
    node* tmp = first;
 
    while(tmp->next != first)tmp=tmp->next;
    tmp->next = NULL;
 
    tmp = first;
 
    while(tmp!=NULL){
        if(find(tmp->val, first)){
            n=tmp->val;
            while(tmp!=NULL && tmp->val==n)tmp=tmp->next;
            remove(n, first);
        } else {
            tmp=tmp->next;
        }
    }
 
    if(first!=NULL){
        tmp=first;
        while(tmp->next!=NULL)tmp=tmp->next;
        tmp->next = first;
    }
}
 
int main(){
 
    node* first = new node;
    node* el1=first;
    node* el2;
    first->val = 1;
    for(int i=0;i<10;i++){
        el2 = new node;
        el2->val=1;
        el1->next = el2;
        el1=el2;
    }
    el1->val=2;
 
    el2 = new node;
    el2->val=1;
    el1->next = el2;
    el2->next=first;
 
 
    check(first);
 
    if(first==el1 && el1->next==el1)cout<<"OK"<<endl;
    else cout<<"Nie OK"<<endl;
 
    return 0;
}