// Question 2: Longest subarray of distinct elements == k 
// Input : str: "aabacbebebe"  k = 3
// Output: 7 


#include<iostream>
#include<unordered_map> 

using namespace std;

int main(){ 
    
    string str = "aabacbebebe";
     int k = 3;
     
     int left = 0;
     int ans = 0; 
     unordered_map<char,int>map;

     for(int right =0;right<str.length();right++ ){
         map[str[right]]++;
         
         while(map.size() > k){
            map[str[left]]--;

            if(map[str[left]] == 0){
                 map.erase(str[left]);
            }

            left++;
         }

         if(map.size() == k){
           ans = max(ans,right-left+1);
         }
     }
     

     cout<<ans;
  return 0; 
}