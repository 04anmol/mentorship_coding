#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,search,temp;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cout<<"enter element "<<i+1<<" : ";
        cin>>arr[i]; 
    }
    cout<<endl<<"implementing bubble sort"<<endl;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}