// REMOVE DUPLICATES

#include<iostream> 
using namespace std;


int main(){
     int nums[8]= {0,0,1,2,2,2,3,4};
     
     int slow = 0;
      
      for(int fast=1;fast<8;fast++){
        if(nums[fast] != nums[slow]){
            slow++;
           nums[slow] = nums[fast];
        }
        
      }


      cout<<slow +1<<endl;

}