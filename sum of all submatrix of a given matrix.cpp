#include<iostream>
using namespace std;
int main() {
    int n=3,sum=0;
	int arr[][3] = {{1,2,3},{4,5,6},{7,8,9}};
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
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
    			for(int brj=tlj ;brj<n;brj++)
    			{
                //Two loops for fetching the elements betweeen top left index and bottom right index
                    for(int i=tli;i<=bri;i++)
                    {
                        for(int j=tlj;j<=brj;j++)
                        {
                            int x=arr[i][j];
                            sum+=x;
                        }
                    }
    			}
    		}
    	}
    }
    cout<<sum;
	return 0;
}
