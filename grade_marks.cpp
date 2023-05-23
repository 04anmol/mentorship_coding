#include<bits/stdc++.h>
using namespace std;
int main(){
    int s1,s2,s3,s4,s5,sum,percentage;
    cout<<"enter the marks obtained in five subjects, out of 10, respectively : "<<endl;
    cin>>s1>>s2>>s3>>s4>>s5;
    sum=s1+s2+s3+s4+s5;
    percentage=(sum/50)*100;
    if(percentage>=90){
        cout<<"Grade obtained : A";
    }
    else if(percentage>=80 && percentage<90){
        cout<<"Grade obtained : B";
    }
    else if(percentage>=60 && percentage<80){
        cout<<"Grade obtained : C";
    }
    else if(percentage<60){
        cout<<"Grade obtained : D";
    }
    return 0;
}