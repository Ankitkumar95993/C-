#include<iostream>
#include<stack>
using namespace std;

int main(){

stack<int>s;
s.push(4);
s.push(5);

s.pop();

cout<<s.top()<<endl;

if(s.empty())
{
    cout<<"stack is empty"<<endl;
}
else{
    cout<<"stack is not empty"<<endl;
}
}