// TWO SUM
// Put one pointer at the beginning (left).
// Put another pointer at the end (right).
// Calculate sum = nums[left] + nums[right].
// If sum == target, answer found.
// If sum < target, move left forward to make the sum bigger.
// If sum > target, move right backward to make the sum smaller.

   
#include <iostream>
using namespace std;

int main() {
    int arr[4] = {2, 7, 11, 15};
    int target = 9;

    int left = 0;
    int right = 3;      

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            cout << left <<" "<< right;
            break;
        }
        else if (sum < target) {
            left++;
        }
        else {
            right--;
        }
    }

    return 0;
}