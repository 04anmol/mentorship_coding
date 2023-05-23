#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,r,s=0;
    cout<<"enter n : ";
    cin>>n;
    while(n>0){
        r=n%10;
        s=(s*10)+r;
        n=n/10;
    }
    cout<<"the reverse of the number entered is : "<<s;
    return 0;
}