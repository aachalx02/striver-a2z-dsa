// *****
// *****
// *****
// *****
// *****

#include<iostream>
using namespace std;

void rectangle_pattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n=5;
    rectangle_pattern(n);
    return 0;
}