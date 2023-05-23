#include<bits/stdc++.h>
using namespace std;
int main(){
    int matrixa[10][10],matrixb[10][10],matrixc[10][10],matrixd[10][10],n,i,j,k,sum=0;
    cout<<"enter row & coloumn for square matrixa & matrixb : ";
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("enter matrixa[%d][%d] : ",i,j);
            cin>>matrixa[i][j];
        }
    }
    cout<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("enter matrixb[%d][%d] : ",i,j);
            cin>>matrixb[i][j];
        }
    }
    cout<<endl;
    cout<<"ADDITION OF MATRIXA & MATRIXB\n";
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            matrixc[i][j]=matrixa[i][j]+matrixb[i][j];
            printf("%d\t",matrixc[i][j]);
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"MULTIPLICATION OF MATRIXA & MATRIXB\n";
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        sum=0;
            for(k=0;k<n;k++){
                sum+=matrixa[i][k]*matrixb[k][j];
                matrixd[i][j]=sum;  
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t",matrixd[i][j]);
        }
        cout<<endl;
    }
    return 0;
}
    



