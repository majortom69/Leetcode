class Solution {
public:
    static bool comppair(std::pair<int, int> a, std::pair<int, int> b) {
        return a.second > b.second;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        //               value, freq
        std::unordered_map<int, int> hashmap;

        std::vector<int> ans;
        for(auto x : nums) {
            hashmap[x]++;
        }

        std::vector<std::pair<int, int>> sortedhashmap(hashmap.begin(), hashmap.end());
        std::sort(sortedhashmap.begin(), sortedhashmap.end(), comppair);
        
        int iter = 1;
        for(auto x : sortedhashmap) {
            ans.push_back(x.first);
            if(iter >= k) break;
            iter++;
        }

        return ans;
    }
};