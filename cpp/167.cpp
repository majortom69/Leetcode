class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0, r = numbers.size() -1;
        int sum;
        while(l < r) {
            sum = numbers[l] + numbers[r];
            if(sum > target) {
                r--;
            } else if(sum < target) {
                l++;
            } else {
                return  { l+1, r+1 };
            }

        }
        return {-1, -1};
    }
};