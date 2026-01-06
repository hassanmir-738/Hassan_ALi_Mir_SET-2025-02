#include<iostream>
using namespace std;
int main()
{
    int num, i = 1;

    cout<<"Enter a number: ";
    cin>>num;

    cout<<"Factors are : ";

    while (i <= num)
    {
        if(num % i ==0)
        {
            cout<<i<<" ";
        }
        i++;
    }
    return 0;
}