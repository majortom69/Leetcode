class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;

        unordered_map<char, int> ourpamm;
        
        for(char c : s) {
            ourpamm[c]++;
        }

        for(char c : t) {
            ourpamm[c]--;
        }

        for(auto c : ourpamm) {
            if(c.second  != 0) {
                return false;
            }

        }
        return true;
    }
};

// =================================================================================================//

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;

        unordered_map<char, int> ourpamm;
        unordered_map<char, int> ourpamm2;
        for(char c : s) {
            ourpamm[c]++; 
        }

        for(char c : t) {
            ourpamm2[c]++; 
        }

        return ourpamm2 == ourpamm;
    }
};