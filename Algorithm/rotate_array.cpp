#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int coins[] = {1,2,5,10,20,50,100,200,500,2000};
    int n = sizeof(coins)/sizeof(int);
    //rotate(start,middle,end)
    rotate(coins,coins+2,coins+n);
    for(int i=0;i<n;i++){
        cout<<coins[i]<<" ";
    }
}
