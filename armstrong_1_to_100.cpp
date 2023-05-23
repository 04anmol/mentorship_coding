#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,r,s=0;
    for(i=1;i<=100;i++){
        j=i;
        while(j>0){
            r=j%10;
            s=s+pow(r,3);
            j=j/10;
        }
        if(i==s){
            cout<<i<<endl;
        }
    }
    return 0;
}