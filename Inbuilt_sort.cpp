#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a[1000],len;
    cout<<"Enter length of array:";
    cin>>len;
    cout<<"Enter elements of array:";
    for(int i=0;i<len;i++){
        cin>>a[i];
    }
    sort(a,a+len);
    for(int i=0;i<len;i++){
        cout<<a[i];
    }
}   
