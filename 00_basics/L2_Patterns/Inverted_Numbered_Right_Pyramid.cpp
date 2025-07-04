// 12345
// 1234
// 123
// 12
// 1

#include<iostream>
using namespace std;

void inrPyramid(int n){
    for(int i=n;i>=1;i--){
        int a=1;
        for(int j=i;j>0;j--){
            cout<<a;
            a++;
        }
        cout<<endl;
    }
}

int main(){
    int n=5;
    inrPyramid(n);
}