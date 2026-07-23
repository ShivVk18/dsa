//   PATTERN => TAKE AGAIN OR MOVE FORWARD
//   COMBINATION SUM 
  
  vector<vector<int>>ans;
  
  void solve(vector<int>& nums,
               int index,
               int target,
               vector<int>& temp)
    {
        if(target==0)
        {
            ans.push_back(temp);
            return;
        }

        if(target<0)
            return;
         


        // Universal base condition in an array
        if(index==nums.size())
            return;

        // Take current element
        temp.push_back(nums[index]);

        solve(nums,
              index,
              target-nums[index],
              temp);
        
        // Backtrack
        temp.pop_back();

       //move to the next index
        solve(nums,
              index+1,
              target,
              temp);
    }