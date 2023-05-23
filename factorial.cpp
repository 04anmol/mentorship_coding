#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,fact=1;
    cout<<"enter n : ";
    cin>>n;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("the factorial of %d is %d",n,fact);
    return 0;
}