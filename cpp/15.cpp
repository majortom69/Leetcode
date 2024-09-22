class Solution {
public:
   

    vector<vector<int>> threeSum(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        std::vector<std::vector<int>> res;

        int l;
        int r;
        int sum;

        for(int  i = 0; i < nums.size(); i++) {
            if(i > 0 && nums[i] == nums[i-1]) continue;
            l = i+1;
            r = nums.size() -1;

            while(l < r) {
                sum = nums[i] + nums[l] + nums[r];
                if(sum > 0) {
                    r--;
                } else if(sum < 0) {
                    l++;
                } else {
                    res.push_back({nums[i], nums[l], nums[r]});
                    l++;
                    while(nums[l] == nums[l-1] && l < r) {
                        l++;
                    }
                }
            }
        }
        return res;
    }
};