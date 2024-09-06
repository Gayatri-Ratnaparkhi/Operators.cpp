#include<iostream>
using namespace std;
int main(){
    int s1, s2, s3, s4, s5;
    cout<<"Enter the Marks(max 100): ";
    cin>>s1>>s2>>s3>>s4>>s5;
    int sum = s1+s2+s3+s4+s5;
    int percentage = sum/5;
    if(percentage>=95){
        cout<<"Grade:O";
    }
    else if(percentage>=90){
        cout<<"Grade:A+";
    }
    else if(percentage>=80){
        cout<<"Grade:A";
    }
    else if(percentage>=70){
        cout<<"Grade:B+";
    }
    else if(percentage>=60){
        cout<<"Grade:B";
    }
    else if(percentage>=50){
        cout<<"Grade:C+";
    }
    else if(percentage>=40){
        cout<<"Grade:C";
    }
    else if(percentage>=35){
        cout<<"pass";
    }
    else{
        cout<<"Faild!!!";
    }
    return 0;

     
}