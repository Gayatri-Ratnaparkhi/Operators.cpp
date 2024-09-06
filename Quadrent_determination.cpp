//Gayatri Ratnaprkhi 23070123169
#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter a= "<<endl;
    cin>>a;
    cout<<"Enter b= "<<endl;
    cin>>b;
    if(a>0&&b>0){
        cout<<"This belongs to First Quadrent."<<endl;

    }
    else if(a>0&&b<0){
        cout<<"This belongs to Second Quadrent."<<endl;
    }
    else if(a<0&&b<0){
        cout<<"This belongs to Third Quadrent."<<endl;
    }
    else{
        cout<<"This belongs to Fourth Quadrent."<<endl;
    }
    return 0;
}