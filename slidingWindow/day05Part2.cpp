// arr = [1,2,2,3,4]
// k =  3 
 

#include<iostream>
#include<vector> 
#include<unordered_map>

using namespace std;


int main(){
     int arr[5] = {1,2,2,3,4};
     int k = 3 ;

     int left= 0 ;

     vector<int>ans;
     
     unordered_map<int,int>mpp;

     for(int right = 0; right < 5; right++)
{
    mpp[arr[right]]++;

    if(right - left + 1 > k)
    {
        mpp[arr[left]]--;

        if(mpp[arr[left]] == 0)
            mpp.erase(arr[left]);

        left++;
    }

    if(right - left + 1 == k)
    {
        int count = 0;

        for(auto x : mpp)
        {
            if(x.second == 1) 
                count++;
        }

        ans.push_back(count);
    }
}
     

for(auto x : ans){
        cout<<x;
}



    return 0;
}