#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a=0,b=1,c,i;
    cout<<"enter n : ";
    cin>>n;
    cout<<a<<endl<<b<<endl;
    for(i=3;i<=n;i++){
        c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;
    }
    return 0;
}