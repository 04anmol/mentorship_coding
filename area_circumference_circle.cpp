#include<bits/stdc++.h>
using namespace std;
int main(){
    float r,ar,c,pi=3.14;
    cout<<"enter the radius of the circle in cm : ";
    cin>>r;
    ar=pi*pow(r,2);
    c=2*pi*r;
    cout<<"area of the circle : "<<ar<<endl<<"circumference of the circle : "<<c;
    return 0;
}