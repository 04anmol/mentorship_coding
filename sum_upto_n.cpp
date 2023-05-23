#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,sum=0;
    cout<<"enter n : ";
    cin>>n;
    for(i=0;i<=n;i++){
        sum=sum+i;
    }
    cout<<"sum of all the numbers up to n is : "<<sum;
    return 0;
}