// text = "aabaabaa"
// pattern = "aaba" 


//anagram
#include<iostream> 
#include<unordered_map>


using namespace std;


int main(){
     string text = "aabaabaa";
     string pattern = "aaba";  
    
     // a :3 ,  b:1 
     
     int left =0;
     int countAnagram = 0;  
      
     unordered_map<char,int>patternMap;
     unordered_map<char,int>windowMap;
      
     
    //  //frequency table. for pattern string
    //  for(int i=0;i<pattern.length();i++){
    //       patternMap[pattern[i]]++;
    //  } 
     

    //range base loop 
    for(auto x : pattern){
         patternMap[x]++;
    }
      



     for(int right =0;right<text.length();right++){
             
          //add to map 
          windowMap[text[right]]++;

          if(right-left+1 > pattern.length()){
               windowMap[text[left]]--;
               if(windowMap[text[left]] == 0){
                windowMap.erase(text[left]);
               }
                left++;
          }


          if(right - left +1 == pattern.length()){ 
            if(patternMap == windowMap){
                 countAnagram++;
            }
          }


     }


     cout<<countAnagram;



     
}

