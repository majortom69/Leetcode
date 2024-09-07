class Solution {
public:
    bool isAlpNum(char c) {
        return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9' );
    }
    bool isPalindrome(string s) {
        int l = 0, r = s.size() -1;
        while(l < r) {

            while(!isAlpNum(s[l]) && l < r) l++;
            while(!isAlpNum(s[r]) && l < r) r--;


            if( std::tolower(s[l]) !=std::tolower(s[r])) return false;
            l++; r--;
        }
        return true;
    }
};