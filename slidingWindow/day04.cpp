// 1.) We have to initialize a result. vector.
// 2.) We have to intialize a left pointer. 
// 3.) We have to initialize. a Map 
// 4.) We have to run for loop with right till the size of an array.
// 5.) We will insert the element in map and increment.
// 6.) if window > k map[left--] if left frequency in. map ===0 then we will erase it from the map
// 7.) if window == k then. result.push_back(map.size()).


#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std; 




int main(){    
    
    
    vector<int>arr = {1,2,1,3,4,2,3};  
    int k =4;

    
    int left = 0;
    vector<int>ans; 
    unordered_map<int,int>mp; 


    for(int right=0;right<arr.size();right++){ 
        mp[arr[right]]++;

        if(right-left+1 > k){
            mp[arr[left]]--;
            if(mp[arr[left]] == 0){
                mp.erase(arr[left]);
            }

            left++;
        }

        if(right-left+1 == k){
             ans.push_back(mp.size());
        }
    }
     

    for(int i=0;i<ans.size();i++){
         cout<<ans[i];
    }
    




    return 0;
}