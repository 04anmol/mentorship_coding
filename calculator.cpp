#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    char n;
    cout<<"enter a : ";
    cin>>a;
    cout<<"enter b : ";
    cin>>b;
    cout<<"choose the operator you want to use (+,-,*,/,%) : ";
    cin>>n;

    switch(n)
    {
        case '+':
        printf("a+b : %d",a+b);
        break ;
        case '-':
        printf("a-b : %d",a-b);
        break ;
        case '*':
        printf("a*b : %d",a*b);
        break ;
        case '/':
        printf("a/b : %d",a/b);
        break ;
        case '%':
        printf("a%b : %d",a%b);
        break ;
        default :
        printf("oops! looks like you did not choose an appropriate operator");
    }
    return 0;
}