class Solution {
public:
    bool isValid(string s) {
        std::stack<int> pstack;
        std::unordered_map<char, char> closeTOOpen = {
            {']', '['},
            {')', '('},
            {'}', '{'}
        };

        for(char c : s) {
            if(closeTOOpen.count(c) > 0) {
                if(!pstack.empty() && pstack.top() == closeTOOpen[c]) {
                    pstack.pop();
                } else {
                    return false; // вернуть ложь в случае если у нас только 1 элемент
                }
            } else {
                pstack.push(c);
            }
        }
        return pstack.empty();
    }
};