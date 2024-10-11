class Solution {
public:
    int findMin(vector<int>& nums) {
        int res = nums[0];
        int l = 0, r = nums.size() -1;

        int mid;
        while(l <= r) {

            if(nums[l] < nums[r]) {
                res= std::min(res, nums[l]);
                break;
            }
            mid = (r + l) / 2;
            res = std::min(res, nums[mid]);
            if(nums[mid] >= nums[l]) {
               l = mid + 1 ;
            } else { 
                r = mid - 1;
            }
        }

        return res;

        
    }
};