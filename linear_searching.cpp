#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,search;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cout<<"enter element "<<i+1<<" : ";
        cin>>arr[i]; 
    }
    cout<<endl<<"implementing linear searching"<<endl;
    cout<<"enter the element you want to search : ";
    cin>>search;
    for(i=0;i<n;i++){
        if(arr[i]==search){
            cout<<"element found at position "<<i+1<<" and index "<<i;
            break;
        }
    }
    if(i==n){
        cout<<"element NOT found";
    }
    return 0;
}