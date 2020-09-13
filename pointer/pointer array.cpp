#include<iostream>
using namespace std;
int main(){
    int len;
    cin>>len;
    //Array declaration
    int *arr = new int[10];
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }
}
