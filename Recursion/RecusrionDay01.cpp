

//Factorial of a number 


#include<iostream>
using namespace std;

int solve(int n){
          if(n == 0 || n==1){
            return 1;
          } 


          return n * solve(n-1);


    }

int main(){ 

     
  int ans = solve(5);

cout<<ans;

    return 0;                          
}