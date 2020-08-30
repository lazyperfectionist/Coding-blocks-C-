#include<iostream>
using namespace std;
int main(){
    char ch;
    do{
        cin>>ch;
        int a,b;
        switch(ch){
            case '+':
                cin>>a>>b;
                cout<<a+b<<endl;
                continue;
            case '-':
                cin>>a>>b;
                cout<<a-b<<endl;
                continue;
            case '/':
                cin>>a>>b;
                cout<<a/b<<endl;
                continue;
            case '*':
                cin>>a>>b;
                cout<<a*b<<endl;
                continue;
            case '%':
                cin>>a>>b;
                cout<<a%b<<endl;
                continue;
            case 'x':
                break;
            case 'X':
                break;
            default:
                cout<<"Invalid operation. Try again."<<endl;
        }
    }
    while(ch!='x');
}
