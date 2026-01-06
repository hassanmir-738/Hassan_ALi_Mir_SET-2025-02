#include<iostream>
using namespace std;
int main()
{
    int num, num_limit;
    cout<<"Enter a number :";
    cin>>num;
    cout<<"Enter number limit :";
    cin>>num_limit;

    for(int i = 1; i<=num_limit; i++)
    {
        cout<< num << "x" <<i<< "=" <<num*i <<endl;
    }

    return 0;
}