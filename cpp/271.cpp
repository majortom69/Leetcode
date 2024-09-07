class Solution {
public:

    string encode(vector<string>& strs) {
        std::stringstream ss;
        for (std::string x : strs) {
        	ss << x.length() <<'#' <<  x;
        }
        return ss.str();
    }

    vector<string> decode(string s) {
        std::vector<std::string> ans;

        int i = 0;
        while (i < s.length() ) {
        
        	std::string lengthstr = "";
        	while (isdigit(s[i]))
        	{
        		lengthstr += s[i];
        		i++;
        	}
        	i++;
        	int length = std::stoi(lengthstr);


        	std::string word = s.substr(i, length);
        	ans.push_back(word);
        	i += length;

        }

        return ans;
    }
};
