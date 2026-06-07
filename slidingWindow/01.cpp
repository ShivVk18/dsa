// 1. We will intialize the variable 
// 2.we iterate an array with a right pointer
// 3. we will compare the size of the window i.e right-left+1 to k 
// 4. if(windowSize greate than k) , if(windowSize == k) => 
// 5. return ans -> just print it 


#include<iostream> 
using namespace std;

int main(){
   
    int arr[9] = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int k = 4;

    int left = 0; 
    int windowSum = 0;
    int maxSum = 0;
    

    for(int right =0;right<9;right++){

        windowSum = windowSum + arr[right];
          
        if(right-left+1 > k){
            windowSum = windowSum - arr[left];
            left++;
        }

        if(right-left+1 == k){
            maxSum = max(maxSum,windowSum);
        }

    }


    cout<<"MAX SUM OF THE SUBARRAY OF SIZE K IS : "<<maxSum<<endl;

    return 0;
}