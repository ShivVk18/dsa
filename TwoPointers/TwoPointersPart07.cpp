// Container with most water


#include<iostream> 
#include<vector>
#include<algorithm> 

using namespace std;

int main(){ 

    vector<int>heights = {1,7,2,5,4,7,3,6};
    int left =0;
    int right = heights.size() - 1;

    int maxArea = 0 ;

    while (left<right)

    { 
        int area = (right - left) * min(heights[left],heights[right]);

        maxArea = max(area,maxArea);
        
        if(heights[left] <= heights[right]){
             left++;
        }else{
            right--;
        }
        

        

    }


    cout<<maxArea;
    
    

    return 0;
}