#include<iostream>
#include<stack>
using namespace std;
void print (stack<int>s){
    stack <int> temp;
    while(s.size()>0){
        temp.push(s.top());
        s.pop();
    }
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        temp.pop();
    }
    cout<<endl;
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    print(st);
    stack<int> ans;
    stack<int> b;
    while(st.size()>0){
        b.push(st.top());
        st.pop();
    }
     while(b.size()>0){
        ans.push(b.top());
        b.pop();
    }
    print(ans);
    return 0;
}