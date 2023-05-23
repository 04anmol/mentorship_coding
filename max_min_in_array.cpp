#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,sum=0,max,min;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cout<<"enter element "<<i+1<<" : ";
        cin>>arr[i];    
    }
    cout<<endl;
    max=arr[0];
    min=arr[0];
    for(i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i];
        }
    }
    cout<<"the maximum element is : "<<max<<endl;
    cout<<"the minimum element is : "<<min;
    return 0;
}