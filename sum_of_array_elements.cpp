#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,sum=0;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cout<<"enter element "<<i+1<<" : ";
        cin>>arr[i];    
    }
    for(i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<"the sum of the elemets of the array is : "<<sum;
    return 0;
}