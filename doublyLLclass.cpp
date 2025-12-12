#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
     this->val=val;
     this->next = NULL;
     this->prev = NULL;
    }
};
class DoublyLL{
    public:
    Node* head;
    Node* tail ;
    int count ;
    DoublyLL(){
        head = tail = NULL;
        count = 0;
    }
    void insertathead(int val){
        Node* t = new Node(val);
        if(count == 0){
            head = tail = t;
            
        }
        else{
           t->next =head;
           head->prev = t;
           head = t;
        }
        count++;
    }
    void insertAttail(int val){
        Node* t = new Node(val);
        if(count == 0){
            head = tail = t;
            
        }
        else{
           tail->next =t;
           t->prev = tail;
           tail = t;
        }
        count++;
    }
    void insertAtIdx(int idx ,int val){
        if(idx<0 || idx>count) {
            cout<<"invalid index";
            return;
        }
        else if (idx == 0)insertathead(val);
        else if (idx == count)insertAttail(val);
        else{
            Node* temp = head;
            for(int i = 1 ;i<=idx-1;i++){
               temp = temp->next;
            }
            Node* t = new Node(val);
            t->next = temp->next;
            temp->next = t;
            t->next->prev = t;
            t->prev = temp;
            count++;
        }
    }
    void display(){ //o(n)
    Node* x = head;
    while(x){
        cout<<x->val<<" ";
        x = x->next;
    }
    cout<<endl;
}
};
int main(){
     DoublyLL* d = new DoublyLL();
     d->insertathead(10);
      d->insertathead(10);
       d->insertathead(10);
        d->insertathead(10);
        d->display();

    
    return 0;
}