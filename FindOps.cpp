#include <iostream>

using namespace std;
int main(){
    // declare two integer variables to store user input
    int n1, n2;
    // prompt the user to enter two numbers
    cout<<"Enter 2 numbers : \n";
    cin>>n1>>n2;
    // Logic Handling:
    // 1. If the first number is greater, subtract them
    if(n1 > n2){
        cout<<"Result is : "<<n1 - n2;
    }else if(n1<n2){ //2. If the second number is greater, add them
        cout<<"Result is : "<<n1 + n2;
    }else{// 3. If they are equal, multiply them
        cout<<"Result is : "<<n1 * n2;
    }
    return 0;
}