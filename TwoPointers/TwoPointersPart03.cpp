// VALID PALINDROME

// 1.)we will initalize the variable left,right 
// 2.) while(left< =right) 
// 3.) if(!alphanum(s[left)) left++;  // same for right but decrement  
// 4.) if(tolower(s[left]) != tolower(s[right]) ) {
//     return false;

//   }
// 5.) left++ ,right--;
// 6.) return true;

#include<iostream> 
using namespace std; 

int main(){ 
    string s = "A man, a plan, a canal: Panama";
    int left =0;
    int right = s.length() - 1;

    while(left < right){ 
        if(!isalnum(s[left])){
             left++;
        }else if(!isalnum(s[right])){
            right--;

                      
         }else if(tolower(s[left]) != tolower(s[right])){ 
            cout<<"IT IS NOT A PALINDROME";
            break;
        }else{
            left++;
            right--;
        }
    } 
    
    cout<<"IT IS A PALINDROME";
    



    return 0;
}