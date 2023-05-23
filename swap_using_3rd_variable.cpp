#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter a & b respectively : "<<endl;
    cin>>a>>b;
    c=b;
    b=a;
    a=c;
    cout<<"swapped values of a & b respectively are : "<<endl<<a<<endl<<b;
    return 0;
}