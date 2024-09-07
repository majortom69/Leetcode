class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<std::string, std::vector<std::string>> hashmap;

        for(auto s : strs) {
            std::string word = s;
            std::sort(word.begin(), word.end());
            hashmap[word].push_back(s);
        }

        std::vector<std::vector<std::string>> ans;

        for(auto x : hashmap) {
            ans.push_back(x.second);
        }
        

        return ans;
    }
};