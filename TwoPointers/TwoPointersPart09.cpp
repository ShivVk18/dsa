// THREE SUM 

#include<iostream> 
#include<vector>
#include<algorithm>
using namespace std;

int main(){ 
    vector<int>nums = {-1,0,1,2,-1,-4};


// Step-1 we sort the array
sort(nums.begin(),nums.end());


for(int i=0;i<nums.size();i++){

    //index duplication
    if(i > 0 && nums[i] == nums[i-1]){
        continue;
    }
     int x1 = nums[i];


     
     int left = i+1;
     int right = nums.size() -1;
      

     while(left< right){
          
         if(nums[left] + nums[right] == -x1){
             cout<<x1<<nums[left]<<nums[right]; 
             left++;
             right--;
         }else if(nums[left] + nums[right] > -x1){
            right--;
         }else{
            left++;
         }


         while(left <right && nums[left] == nums[left+1]){ 
            left++;
         }

         while(left<right && nums[right] == nums[right-1]){
            right--;
         }
         


     }



}


return 0;


}