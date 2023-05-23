#include<bits/stdc++.h>
using namespace std;
int main(){
    int y;
    cout<<"enter a year : ";
    cin>>y;
    if((y%4==0) && (y%100!=0) || (y%400==0)){
        printf("%d is a leap year",y);
    }
    else{printf("%d is NOT a leap year",y);}
    return 0;
}