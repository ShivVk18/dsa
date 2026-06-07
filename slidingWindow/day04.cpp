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