// *********
//  *******
//   *****
//    ***
//     *

#include<bits/stdc++.h>
using namespace std;

void s2pyramid(int n){
    for (int i=0; i<n; i++)
    {
        // For printing the spaces before stars in each row
        for (int j=0; j<i; j++)
        {
            cout <<" ";
        }
       
        // For printing the stars in each row
        for(int j=0;j<2*n -(2*i+1);j++){
            
            cout<<"*";
        }
        cout << endl;
    }
}

int main(){
    int n=5;
    s2pyramid(n);
}