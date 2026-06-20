// MERGE SORTED ARRAY


#include<iostream> 
using namespace std; 

int main(){ 
   int num1[6] = {1,2,3,0,0,0}; 
    int num2[3] = {2,5,6}; 

    int m = 3;
    int n =3;

    int i = m-1;
    int j = n-1; 
    int k = m+n-1; 


    while(i>=0 && j>=0){ 
        if(num1[i] >= num2[j]){
            num1[k] = num1[i];
            i--;
        }else{
            num1[k] = num2[j];
            j--;
        }

        k--;
    }
    
     
    while(j>=0){
        num1[k] = num2[j];
        j--;
        k--;
    }


   for(int i=0;i<6;i++){
     cout<<num1[i];
   }

   return 0;



}