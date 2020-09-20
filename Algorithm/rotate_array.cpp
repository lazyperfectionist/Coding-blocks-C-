#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int coins[] = {1,2,5,10,20,50,100,200,500,2000};
    int n = sizeof(coins)/sizeof(int);
    //rotate(start,middle,end)
    rotate(coins,coins+2,coins+n);
    for(int i=0;i<n;i++){
        cout<<coins[i]<<" ";
    }
    cout<<endl;
    vector<int> v{1,2,3};
    //rotate(v.begin(),v.begin()+2,v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    next_permutation(v.begin(),v.end());
    //Returns the next greater number possible
    for(int x:v){
        cout<<x<<" ";
    }


}
