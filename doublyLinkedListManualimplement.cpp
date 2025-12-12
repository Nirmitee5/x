#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};
void display(Node* head){ //o(n)
    Node* x = head;
    while(x){
        cout<<x->val<<" ";
        x = x->next;
    }
    cout<<endl;
}
void displayrec(Node* head){ //o(n) because call stacks are created everytime some changes are made
    if(head==NULL) return;
    cout<<head->val<<" ";
    displayrec(head->next);
}
void displayrecrev(Node* head){ //o(n) because call stacks are created everytime some changes are made
    if(head==NULL) return;
    displayrecrev(head->next);
    cout<<head->val<<" ";
    
    
}
void displayrevTail(Node* tail){
    while(tail){
        cout<<tail->val<<" ";
        tail = tail->prev;
    }
    cout<<endl;
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;
    b->prev = a;
    c->prev = b;
    d->prev = c;
    display(a);
    displayrevTail(d);
    return 0;
}