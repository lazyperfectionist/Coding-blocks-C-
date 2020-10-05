#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int a,int b){
    return a<=b;
}
int main(){
    int coins[] = {1,2,5,10,20,50,100,200,500,2000};
    int n = sizeof(coins)/sizeof(int);
    int money= 168  ;
    while(money>0){
        int lb = lower_bound(coins,coins+n,money,compare)-coins-1;
        cout<<coins[lb]<<endl;
        money= money - coins[lb];
    }
    

}



                                            // OR YOU CAN DO THIS ALSO : 

//No this wont work because lowerbound return a number greater than or equal to 	the number passed : 
//upper bound returns a number strictly greater than the number passed :  



#include <iostream>
#include<algorithm>
using namespace std;
int main(){
	int money = 168;
	int coins[] = {1,2,5,10,20,50,100,200,500,2000};
	int n = sizeof(coins)/sizeof(int);


	while(money>=0){
	int *mon = lower_bound(coins,coins+n,money);
	if(mon-coins ==0){
		cout<<1<<endl;
	}
	else{
		cout<<coins[mon-coins-1]<<endl;
	}
	money = money-coins[mon-coins-1];
	}
}
