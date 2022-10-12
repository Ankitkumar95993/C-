#include<iostream>
using namespace std;

int main(){
 int f;
 cout<<"enter the no"<<endl;
 cin>>f;
 int sum =0, product = 1;

while(f!=0)
{
    int r = f%10;
    product = product * r ;
    sum = sum + r;
    f = f/10;
}
int ans =  product - sum;

cout << ans<<endl;


    return 0;
}