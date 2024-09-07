// Вместо того чтобы сравнивать по-буквенно каждое слово много раз, 
// мы просто удаляем последнюю букву у нулевого элемента, 
// если оно не совпадает с strs[i]

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) return "";
        std::string prefix = strs[0];

        for (int i = 1; i < strs.size(); i++) {
            while (prefix != strs[i].substr(0, prefix.size())) {
                prefix = firstStr.substr(0, prefix.size() - 1);
            }
        }

        return prefix;
    }
};