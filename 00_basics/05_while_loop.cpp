// ✅ Concept: While Loop + Factorial
// 🧠 Approach: Use while loop to calculate factorial of 5

#include<iostream>
using namespace std;
int main(){
    int n=5;
    int fact=1;
    while(n>=1){
        fact*=n;
        n--;
    }
    cout<<"Factorial of 5 = "<<fact;
}