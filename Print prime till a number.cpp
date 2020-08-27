#include <iostream>
using namespace std;
int main(){
    int x;
    char ch ='y';
    cin>>x;
    for(int i=3;i<=x;i++)
    {
        for(int j=2;j<=i-1;j++)
        {
            if((i%j)==0){
                ch = 'n';
                break;
            }
            else{
                ch='y';
            }
        }
        if(ch=='y'){
            cout<<i<<endl;
        }
    }
}

\* Prime numeber till a number including a function*/
#include <iostream>
using namespace std;
void primetilln(int x){
    char ch ='y';
    cin>>x;
    for(int i=3;i<=x;i++)
    {
        for(int j=2;j<=i-1;j++)
        {
            if((i%j)==0){
                ch = 'n';
                break;
            }
            else{
                ch='y';
            }
        }
        if(ch=='y'){
            cout<<i<<endl;
        }
    }
}
int main(){
    int x;
    cin>>x;
    primetilln(x);
}
