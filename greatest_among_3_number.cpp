#include<bits/stdc++.h>
using namespace std;
int main(){
    float a,b,c;
    cout<<"enter three numbers (to find out the largest number among them) : "<<endl;
    cin>>a>>b>>c;
    if(a>=b && a>=c){
        printf("%f is the largest number",a);
    }
    else if(b>=a && b>=c){
        printf("%f is the largest number",b);
    }
    else if(c>=a && c>=b){
        printf("%f is the largest number",c);
    }
    return 0;
}