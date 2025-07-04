// *****
// ****
// ***
// **
// *

#include<iostream>
using namespace std;

void irPyramid(int n){
    for(int i=n;i>=1;i--){
        for(int j=i;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n=5;
    irPyramid(n);
}