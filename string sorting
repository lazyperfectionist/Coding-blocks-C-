#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
//Comperator function (on the basis of length): if length is eqauk then on lexi basis
bool compare(string a,string b){
    //if length is equal then lexi comparison
    if(a.length()==b.length()){
        return a<b;
    }
    return a.length()>b.length();
}
int main(){
    int n;
    cin>>n;
    string s[100];
    cin.get();
    for(int i=0;i<n;i++){
        getline(cin,s[i]);
    }
    for(int i=0;i<n;i++){
        cout<<s[i]<<endl;
    }
    //Inbuilt sort fuction from algorithm header file 
    //sort(start,end,sorting_function)
    sort(s,s+n,compare);
    for(int i=0;i<n;i++){
        cout<<s[i]<<" ";
    }
}

