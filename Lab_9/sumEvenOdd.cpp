#include<iostream>
using namespace std;
int main()
{
    int n, num;
    int evenSum = 0, oddSum = 0;

    cout<< "How many numbers for sum?";
    cin>>n;

    for(int i = 1; i<=n; i++)
    {
        cout<<"Enter a number:";
        cin>>num;

        if(num% 2 ==0)
        evenSum += num;
        else
        oddSum += num;
    }

    cout<<"Sum of Even numbers= "<<evenSum<<endl;
    cout<<"Sum of Odd numbers= "<<oddSum<<endl;
}