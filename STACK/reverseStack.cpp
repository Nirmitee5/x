#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    // stack<int>temp;
    // while(st.size()>0){
    //     temp.push(st.top());
    //     st.pop();
    // }
    // stack<int>c;
    // while(temp.size()>0){
    //     c.push(temp.top());
    //     temp.pop();
    // }
    // while(c.size()>0){
    //     st.push(c.top());
    //     c.pop();

    // }
    // cout<<st.top();
    int n = st.size();
    int arr[n] ;
    for(int i = 0 ;i<n;i++){
        arr[i] = st.top();
        st.pop();
    }
    for(int i = 0 ;i<n;i++){
        st.push(arr[i]);
    }
    cout<<st.top();
    return 0;
}