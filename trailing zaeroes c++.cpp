#include <iostream>
using namespace std;
int trailzero(int n){
    int ans=0;
    int i;
    while(n>0){
        n=n/5;
        ans = ans+n;
    }
    return ans;
}



int main() {
    int n;
    cin>>n;
    cout<<trailzero(n);
}
