#include<iostream>
using namespace std;
int main() {
    int n=3;
    int sum=0;
	int arr[][3] = {{1,2,3},{4,5,6},{7,8,9}};
  //Prefix sum array 
  int pref_arr[3][3] = {0};
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
  //Filling 1st element
    pref_arr[0][0] = arr[0][0];
  //fill first col
    for(int j=1;j<n;j++){
        pref_arr[0][j] = pref_arr[0][j-1] + arr[0][j];
    }
  //filling first column
    for(int i=1;i<n;i++){
        pref_arr[i][0] = pref_arr[i-1][0] + arr[i][0];
    }
  //filling rest of the elements
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            pref_arr[i][j] = pref_arr[i-1][j] + pref_arr[i][j-1] + arr[i][j] - pref_arr[i-1][j-1];
        }
   //printing all the elements
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<pref_arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //Two loops for fetching ith and jth index for top left
    for(int tli=0;tli<n;tli++)
    {
    	for(int tlj=0;tlj<n;tlj++)
    	{
      //Two loops for fetching ith and jth index for bottom right
    		for(int bri=tli;bri<n;bri++)
    		{
    			for(int brj=tlj;brj<n;brj++)
    			{
                    //this part is not working will fix it soon 
                   //sum = sum + pref_arr[bri][brj] - pref_arr[bri][tlj-1] - pref_arr[tli-1][brj] + pref_arr[tli-1][tlj-1];
                   int w=pref_arr[bri][brj];
                   int x=pref_arr[bri][tlj-1];
                   int y= pref_arr[tli-1][brj];
                   int z=pref_arr[tli-1][tlj-1];
                   cout<<w<<" "<<x<<" "<<y<<" "<<z<<endl;
    			}
    		}
    	}
    }
}	
}
