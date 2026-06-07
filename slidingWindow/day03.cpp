#include<iostream>
 
using namespace std; 

int main(){
     int arr[6] = {0,0,0,1,1,0};

     int k = 3 ; 

     int left =0;
     int res = 0;
     int windowRes = 0;
    //  int windowCount =0;
     for(int right =0;right<6;right++){ 
         if(arr[right] == 0){
             windowRes++;
         } 
         
         if(right-left+1 > k){
             if(arr[left] == 0){ 
                windowRes--;
             }
             left++;
         }

         if(right-left+1==k){
             res = max(windowRes,res);
         }

     }
   cout<<res;

     return 0;

}