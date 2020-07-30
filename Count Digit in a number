#include<iostream>
using namespace std;
int main(){
    long long num,d,n,x,count=0,len=0;
    cin>>num;
    cin>>d;
    n=num;
    while(num>0){
        len++;
        num=num/10;
    }
    cout<<"length is:"<<len<<endl;
    for(int i=0;i<=len;i++){
        x=n%10;
        if(x==d){
            count++;
        }
        n=n/10;
    }
    cout<<"Counts of "<<d<<" is:"<<count;
}
