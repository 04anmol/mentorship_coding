#include<bits/stdc++.h>
using namespace std;
int main(){
    int p,c,m,b,eng,sum,percentage;
    cout<<"enter the marks obtained in the following subjects - physics, chemistry, mathematics, biology and english respectively, out of 10 : "<<endl;
    cin>>p>>c>>m>>b>>eng;
    sum=p+c+m+b+eng;
    cout<<"sum of marks obtained : "<<sum<<endl;
    percentage=(sum/50)*100;
    cout<<"percentage obtained : "<<percentage;
    return 0;
}


