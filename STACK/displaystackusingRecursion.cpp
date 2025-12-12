#include<iostream>
#include<stack>
using namespace std;
void displayReverse (stack <int> &s ){
    if(s.size()==0){
        cout<<"the stack is empty";
        return;
    }
    int x = s.top();
    cout<<s.top()<<" ";
    s.pop();
    displayReverse(s);
    s.push(x);
}
void displayStraight(stack <int> &s){
    if(s.size()==0){
        return;
    }
    int x = s.top();
    s.pop();
    displayStraight(s);
    cout<<x<<" ";
    s.push(x);
}
void pushAtBottom(stack<int>&s,int val){
    if(s.size()==0){
        s.push(val);
        return;
    }
    int x = s.top();
    s.pop();
    pushAtBottom(s,val);
    s.push(x);
}
void reverseStack(stack<int>&s){
    if(s.size()==1){
        return;
    }
    int x = s.top();
    s.pop();
    reverseStack(s);
    pushAtBottom(s,x);
}
int main(){
    stack <int> s;
    s.push(90);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    displayReverse(s);
    cout<<endl;
    displayStraight(s);
    cout<<endl;
    pushAtBottom(s,20);
    cout<<endl;
    displayStraight(s);
    cout<<endl;
    reverseStack(s);
     displayStraight(s);
    cout<<endl;
    return 0;
}