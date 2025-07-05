//     *
//    ***
//   *****
//  *******
// *********

#include<iostream>
using namespace std;

void sPyramid(int n){
    for (int i=0; i<n; i++){
        // For printing the spaces before stars in each row
        for (int j=0; j<n-i-1; j++){
            cout <<" ";
        }
       
        // For printing the stars in each row
        for(int j=0;j< 2*i+1;j++){
            
            cout<<"*";
        }
        cout << endl;
    }
}

int main(){
    int n=5;
    StarPyramid(n);
}