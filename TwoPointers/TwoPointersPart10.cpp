// Sort Colors

#include<iostream>
#include<algorithm>
#include<vector> 
using namespace std;

int main(){
    vector<int>colors = {0,0,0,1,1,2,2,2};

    int low= 0;
    int med = 0;
    int high = colors.size() -1;

    while(med<=high){
        if(colors[med] == 1 ){
          med++;
        } 

        if(colors[med] == 0){
            swap(colors[low++],colors[med++]);
        }

        if(colors[med] == 2){
            swap(colors[med],colors[high--]);
        }

    }

    for(int i=0;i<colors.size()-1;i++){
         cout<<colors[i]
    }

    return 0;
}