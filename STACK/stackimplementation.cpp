#include<iostream>
#include<stack>
using namespace std;
int main(){
    // basic stl of the stack 
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    // // printing the element of stack in reverse order by emptying the stack
    // while(st.size()>0){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
     // printing the element of stack in reverse order without emptying the stack but using extra space
     stack <int> temp;
     while(st.size()>0){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
     }
     cout<<endl;
     
     while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
     }
     // print the element in straight order 
    
    
    return 0;
}