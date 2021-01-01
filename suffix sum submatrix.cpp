#include<iostream>
using namespace std;
int main(){
    int n=3;
    int arr[3][3] = {-5,-4,-1,-3,2,4,2,5,8};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int pref_arr[3][3] = {0};
    pref_arr[n-1][n-1] = arr[n-1][n-1];
    
    for(int i=n-2;i>=0;i--){
        pref_arr[n-1][i] = pref_arr[n-1][i+1] + arr[n-1][i];
    }
    for(int i=n-2;i>=0;i--){
        pref_arr[i][n-1] = pref_arr[i+1][n-1] + arr[i][n-1];
    }
    
    for(int i=n-2;i>=0;i--){
        for(int j=n-2;j>=0;j--){
            pref_arr[i][j] = pref_arr[i][j+1] + pref_arr[i+1][j] + arr[i][j] - pref_arr[i+1][j+1];
        }
    }
    int maxi=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<pref_arr[i][j]<<" ";
            maxi=max(maxi,pref_arr[i][j]);
        }
        cout<<endl;
    }
    cout<<maxi;
    return 0;
}


/*for(int tli=0;tli<n;tli++){
        for(int tlj=0;tlj<n;tlj++){
            for(int bri=tli;bri<n;bri++){
                for(int brj=tlj;brj<n;brj++){
                    for(int i=tli;i<=bri;i++){
                        for(int j=tlj;j<=brj;j++){
                            sum+=arr[i][j];
                        }
                    }
                }
            }
        }
    }*/
