#include<bits/stdc++.h>
using namespace std;
int main(){
    float p,r,t,si,ci;
    cout<<"principal amount : ";
    cin>>p;
    cout<<"time period : ";
    cin>>t;
    cout<<"rate of interest : ";
    cin>>r;
    si=(p*r*t)/100;
    cout<<"simple interest : "<<si;
    ci=p*(pow((1 + r/100),t));
    cout<<"compound interest : "<<ci;
    return 0;
}