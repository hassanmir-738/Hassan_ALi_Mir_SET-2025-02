#include<iostream>
using namespace std;
int main()
{
    int num, i =1;
    int factorial = 1;

    cout<<"Enter a number: ";
    cin>>num;

    while(i<=num)
    {
        factorial = factorial*i;
        i++;    
    }

    cout<<"Factorial = "<<factorial;
    return 0;
}