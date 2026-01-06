#include<iostream>
using namespace std;
int main()
{
    int n;
    float sum = 0;

    // ask the user until the valid input 
    while (true)
    {
        cout<<"How many numbers (1-100):";
        cin>>n;

        if(n>=1 && n<=100)
        break;
    else 
        cout<<"Kindly input valid number :\n";
    }

    float arr[100];

    for(int i = 0; i<n; i++)
    {
        cout<<"Enter a number " <<i+1 <<":";
        cin>>arr[i];
        sum = sum + arr[i];
    }

    cout<<"Average = "<<sum /n;
    return 0;
}