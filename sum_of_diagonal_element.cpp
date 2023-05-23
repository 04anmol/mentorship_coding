#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,matrix[10][10],i,j,sum=0;
    cout<<"enter row : ";
    cin>>m;
    cout<<"enter coloumn : ";
    cin>>n;
    if(m!=n){
        cout<<"NOT a square matrix";
    }
    else{
        int matrix[m][n];
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                printf("enter matrix[%d][%d] : ",i,j);
                cin>>matrix[i][j];
            }
        }
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(i==j){
                    sum=sum+matrix[i][j];
                }
            }
        }
        cout<<"sum of the diagonal elements = "<<sum;
    }
}