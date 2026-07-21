// INClude exclude template

// void solve(..., int index, ...)
// {
//     // Base case
//     if(index == n)
//     {
//         // Store/Print answer
//         return;
//     }

//     // Include current element
//     ...

//     solve(..., index + 1, ...);

//     // Undo changes (Backtracking if modified)

//     // Exclude current element
//     solve(..., index + 1, ...);
// }


class Solution {
public:
    void solve(vector<int>& nums, int index,
               vector<int>& output,
               vector<vector<int>>& ans)
    {
        // Base case
        if(index == nums.size())
        {
            ans.push_back(output);
            return;
        }

        // Include current element
        output.push_back(nums[index]);
        solve(nums, index + 1, output, ans);

        // Backtrack
        output.pop_back();

        // Exclude current element
        solve(nums, index + 1, output, ans);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;

        solve(nums, 0, output, ans);

        return ans;
    }
};