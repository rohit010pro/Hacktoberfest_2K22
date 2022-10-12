#include <bits/stdc++.h>
using namespace std;

long long int factorial_calculator(int n){      //function for factorial of n numbers
    if(n==0){
        return 1;
    }
    return n*factorial_calculator(n-1);
}

int main() {
    int n;    //the number whose factorial is to be calculated

    cout << "Enter a positive integer: ";
    cin >> n;

    cout<<"Factorial of "<<n<< ": "<<factorial_calculator(n)<<endl;

    return 0;
}