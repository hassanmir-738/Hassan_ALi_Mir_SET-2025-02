#include<iostream>
using namespace std;
int main()
{
    float temp, sum = 0, highest;

    for(int i = 1;i<= 7; i++)
    {
        cout<<"Enter temperature for day "<<i<<":";
        cin>>temp;

        sum +=temp;

        if(i==1)
        highest += temp;
        else if(temp > highest)
        highest = temp;

    }
    cout<<"Average temperature = " <<sum / 7<<endl;
    cout<<"Highest temperature = " <<highest<<endl;
}