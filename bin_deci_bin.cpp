#include<bits/stdc++.h>
using namespace std;
int bintodeci(long int x){
    int i=0,r=0;
    while(x!=0){
        if(x%10==1){
            r+=pow(2,i);
        }
        x=x/10;
        i++;
    }
    return r;
}
int decitobin(int x){
    long int result=0;
    int r,i=1;
    while(x!=0){
        r=x%2;
        result+=r*i;
        i=i*10;
        x=x/2;
    }
    return result;
    }
int main(){
    int n,a;
    cout<<"enter n : ";
    cin>>n;
    cout<<"for binary to decimal conversion type 1 & for decimal to binary conversion type 2 : ";
    cin>>a;
    if(a==1){
        bintodeci(n);
        cout<<bintodeci(n);
    }
    if(a==2){
        decitobin(n);
        cout<<bintodeci(n);
    }
    return 0;
}