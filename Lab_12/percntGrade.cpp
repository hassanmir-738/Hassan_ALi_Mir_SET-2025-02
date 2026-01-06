#include<iostream>
using namespace std;

float calculatePercentage(float m1, float m2, float m3, float m4, float m5){
    float total = m1+m2+m3+m4+m5;
    float percentage = (total/500)*100;
    return percentage;
}

void displayResult(float percentage){
    cout<<"Percentage ="<<percentage<< " %"<<endl;

    if(percentage >=90 && percentage<=100){
        cout<<"Grade: A+";
    }
    else if(percentage >=80){
        cout<<"Grade: A";
    }
    else if(percentage >=70){
        cout<<"Grade: B";
    }
    else if(percentage >=60){
        cout<<"Grade: C";
    }
else{
    cout<<"Grade: Fail";
}
}

int main(){
    float m1,m2,m3,m4,m5;

    cout<<"Enter marks of 5 subjects: \n";
    cin>>m1>>m2>>m3>>m4>>m5;

    float percentage = calculatePercentage(m1,m2,m3,m4,m5);
    displayResult(percentage);

    return 0;
}