//Gayatri Ratnaparkhi 23070123169
#include<iostream>
using namespace std;
int main(){
    int PRN, R_PRN;
    cout<<"Please! Enter your 3-digit PRN: ";
    cin>>PRN;
    while(PRN>0){
        R_PRN = PRN%10;
        PRN = PRN/10;
        cout<<R_PRN;

    }
    cout<<" is your Reversed PRN"<<endl;
    return 0;
}