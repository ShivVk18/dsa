// AVERAGE OF SUBARRAYS OF SIZE K

#include <iostream>
#include <vector>
using namespace std;


int main() {
     int arr[9] = {1,3,2,6,-1,4,1,8,2};
     int k = 5;
     
     int left =0;
     float sum = 0;
     vector<float>result;

     for(int right =0;right<9;right++){



         sum = sum + arr[right];

         if(right-left+1 >k ){
            sum = sum - arr[left];
            left++;
         }

         if(right-left+1 == k){
            
             result.push_back(sum/k);
         }
        
        
     }

    for(int i=0;i<result.size();i++){
        cout<<result[i]<<endl;
    }
    
    return 0;
}






