#include<iostream>
using namespace std;
int main(){
    int a[1000]={-4,1,3,-2,6,2,-1,-4,-7},len=9;
int cs=0;
int ms=0;
for(int i=0;i<=len;i++){
    cs+=a[i];
    if(cs<0){
        cs=0;
    }
    ms=max(cs,ms);
}
cout<<"cs "<<cs<<endl;
cout<<"ms "<<ms;
}
