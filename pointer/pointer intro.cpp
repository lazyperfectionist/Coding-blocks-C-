#include<iostream>
using namespace std;
int main(){
    int x = 5;
    //Assigning pointer variable to xptr
    int *xptr = &x;
    //Will print the address of x:
    cout<<xptr<<endl;  
    // Value at address xptr assigned to y: 
    int y = *xptr;
    cout<<y<<endl;
}
