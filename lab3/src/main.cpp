#include<iostream>
#include"../include/summax.h"
#include"../include/ternary.h"
using namespace std;

int main(){
    int ch=0;
    cout<<"Enter \n 1 for ternary array sort \n 2 for max sum partition of an array";
    cin>>ch;
    if(ch==2){
        summax();
    }
    else if(ch==1){
        cout<<"ternarysort"<<endl;
        ternarysort();
    }
}