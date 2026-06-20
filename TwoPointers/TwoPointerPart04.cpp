// REMOVE ELEMENT

#include<iostream> 
using namespace std;


int main(){
     int nums[8]= {0,1,2,2,3,0,4,2};

      int val=2;


      int j = 0;
      
      for(int i=0;i<8;i++){
        if(nums[i] != val){
            nums[j] = nums[i];
            j++;
        }
        
      }


      for(int i=0;i<j;i++){
         cout<<nums[i];
      }

}