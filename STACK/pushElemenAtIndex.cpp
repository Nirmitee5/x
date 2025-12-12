#include<iostream>
#include<stack>
using namespace std;
void print(stack <int> s){
    stack<int> temp;
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
void pushAtBottom(stack <int>& st,int x){
    stack <int> dt;
    while(st.size()>0){
        dt.push(st.top());
        st.pop();
    }
    st.push(x);
     while(dt.size()>0){
        st.push(dt.top());
        dt.pop();
    }
}
void pushAtIdx(stack <int>& st,int x,int n){
     int y = st.size()-n;
     stack <int> dt;
      while(y>0){
        dt.push(st.top());
        st.pop();
        y--;
    }
    st.push(x);
    while(dt.size()>0){
        st.push(dt.top());
        dt.pop();
    }
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    print(st);
    int n ;
    cout<<"enter the element to be added : ";
    int z;
    cin>>z;
    pushAtBottom(st,z);  
    print(st);
    cout<<"enter the idx at which element is to be added : ";
    cin>>n;
    cout<<"enter the element to be added : ";
    cin>>z;                                           
    pushAtIdx(st,z,n);
    print(st);
    return 0;
}
