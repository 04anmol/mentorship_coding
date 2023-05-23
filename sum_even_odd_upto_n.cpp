#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,sum1=0,sum2=0;
    cout<<"enter n : ";
    cin>>n;
    for(i=1;i<=n;i++){
        if(i%2==0){
            sum1=sum1+i;
        }
        else if(i%2!=0){
            sum2=sum2+i;
        }
    }
    printf("sum of even number up to %d is : %d\n",n,sum1);
    printf("sum of odd number up to %d is :  %d",n,sum2);
    return 0;
}