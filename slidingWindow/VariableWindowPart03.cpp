// MAXIMUM SUBSTRING WITHOUT REPEATING CHARACTERS 

#include<iostream> 
#include<unordered_set>
using namespace std; 

int main(){ 

        string str = "abceabcbb";
        int left= 0; 
        int ans = 0;
        unordered_set<char>seen; 

        for(int right =0;right<str.length();right++){ 
            while(seen.count(str[right]) > 0){
               seen.erase(str[left]);
               left++;
            }

            seen.insert(str[right]); 

            ans = max(ans,right-left+1);
        }

        cout<<ans;

        return 0;
}