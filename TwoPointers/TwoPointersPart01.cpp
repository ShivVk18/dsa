#include<iostream> 
using namespace std; 

int main(){  

    //reversing a string
    string s = "hello";
    int left = 0;
    int right =s.length() -1;

    while(left <= right){
        //  int temp = s[left];
        //  s[left] = s[right];
        //  s[right] = temp; 

        swap(s[left],s[right]);

         left++;
         right--;
    }

    cout<<s;

    return 0;
}