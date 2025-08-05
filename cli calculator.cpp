#include <bits/stdc++.h>
using namespace std;
int main(){


cout<<"this is a cli basic calculator\n"<<"you have  + - * / and %(remainder)  ";
cout<<"\n enter the first number: ";
int a;
cin>>a;
cout<<"\n enter the second number: ";
int b;
cin>>b;
char d;
cout<<"\n opretaion to perform";
cin>>d;

switch(d) {
    case '+':
        cout<<a+b;
        break;
    case '-':
        cout<<a-b;
        break;
    case '*':
        cout<<a*b;
        break;
    case '/':
        if (b==0)
            cout<<"can not divide by zero"
        cout<<a/b;
        break;
    case '%':
        cout<<a%b;
        break;
    default:
        cout<<"wrong input";
}



return 0;
}
