#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a,int b){
    return a>b;
}

int main(){
    int a[1000],len;
    cout<<"Enter length of array:";
    cin>>len;
    cout<<"Enter elements of array:";
    for(int i=0;i<len;i++){
        cin>>a[i];
    }
    sort(a,a+len,compare);
    for(int i=0;i<len;i++){
        cout<<a[i];
    }
}   
