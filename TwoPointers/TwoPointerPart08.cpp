// HOW MANY BOATS WE NEEDE TO RESCUE ALL THE PEOPLE 



#include<iostream> 
#include<vector>
#include<algorithm> 

using namespace std;

int main(){ 

    vector<int>persons = {2,4,3};
    int limit = 4;
    //SORT THE ARRAY
    sort(persons.begin(),persons.end());

    // INITIALIZE THE VARIABLE
    int left =0;
    int right = persons.size() - 1;

    int boats = 0 ;

    while (left<=right)

    { 
         
        if(persons[left] + persons[right] <= limit){
            left++;
            
            
        }
        

        right--;
        
        boats++;

    }


    
    cout<<boats;
    

    return 0;
}