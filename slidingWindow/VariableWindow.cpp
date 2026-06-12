// Pattern 1: Longest Subarray with Sum == K 

// arr = {4,1,1,1,2,3,5};
// k =5 

#include<iostream>
using namespace std; 


int main(){
     int arr[7] = {4,1,1,1,2,3,5};
     int k = 5;

     int left = 0;
     int sum = 0;
     int ans = 0;
     

     for(int right = 0;right<7;right++){
         sum += arr[right];

         while(sum>k){
            sum -= arr[left];
            left++;
         }
         
         if(sum == k){
            ans = max(ans,right-left+1);
         }

     }


     cout<<ans;

     return 0; 
}

