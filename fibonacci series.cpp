#include <iostream>
using namespace std;
int main() {
    int a=0,b=1,c,n;
    cout<<"How many terms you want:"<<endl;
    cin>>n;
    cout<<a<<endl;
    cout<<b<<endl;
    c=a+b;
    for(int i=1;i<=n;i++){
        cout<<c<<endl;
        a=b;
        b=c;
        c=a+b;
    }
 
}
