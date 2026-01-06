#include<iostream>
using namespace std;
int main()
{
    int PopA, popB, years = 0;
    float rateA, rateB;

    cout<<"Enter population of Town A: ";
    cin>>PopA;
    cout<<"Enter growth rate of Town A(%): ";
    cin>>rateA;

    cout<<"Enter population of Town B: ";
    cin>>PopB;
    cout<<"Enter growth rate of Town B(%): ";
    cin>>rateB;

    while(PopA<popB){
        PopA += PopA*rateA /100;
        PopB += PopB*rateB /100;
        years++;
    }

    cout<<"After " <<years <<"years: "<<endl;
    cout<<"Population of Town A = "<<PopA<<endl;
    cout<<"Population of Town B = "<<PopB<<endl;

    return 0;
}