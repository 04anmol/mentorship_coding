#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,flag=0;
    cout<<"enter a number, n : ";
    cin>>n;
    for(i=2;i<n;i++){
        if(n%i==0){
            flag=1;
        }
    }
    if(flag==0){
        cout<<"the number is prime";
    }
    else{cout<<"the number is not prime";}
    return 0;
}