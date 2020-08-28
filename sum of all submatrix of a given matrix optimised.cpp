#include<iostream>
using namespace std;
int main() {
    int r,c;
    cin>>r>>c;
    long long int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int sum=0;
    int pref_arr[3][3] = {0};
    cout<<endl;
    pref_arr[0][0] = arr[0][0];
    for(int j=1;j<c;j++){
        pref_arr[0][j] = pref_arr[0][j-1] + arr[0][j];
    }
    for(int i=1;i<r;i++){
        pref_arr[i][0] = pref_arr[i-1][0] + arr[i][0];
    }
    for(int i=1;i<r;i++){
        for(int j=1;j<c;j++){
            pref_arr[i][j] = pref_arr[i-1][j] + pref_arr[i][j-1] + arr[i][j] - pref_arr[i-1][j-1];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<pref_arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //Two loops for fetching ith and jth index for top left
    for(int tli=0;tli<r;tli++)
    {
        for(int tlj=0;tlj<c;tlj++)
        {
      //Two loops for fetching ith and jth index for bottom right
            for(int bri=tli;bri<r;bri++)
            {
                for(int brj=tlj;brj<c;brj++)
                {
                   //sum = sum + pref_arr[bri][brj] - pref_arr[bri][tlj-1] - pref_arr[tli-1][brj] + pref_arr[tli-1][tlj-1];
                    sum+=pref_arr[bri][brj];
                    if(tli>0)
                        sum-=pref_arr[tli-1][brj];
                    if(tlj>0)
                        sum-=pref_arr[bri][tlj-1];
                    if(tli>0 && tlj>0)
                        sum+=pref_arr[tli-1][tlj-1];
                }
            }
        }
    }
    cout<<endl<<"Sum of all submatrics : "<<sum<<endl;
}   
