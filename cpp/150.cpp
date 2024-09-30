class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        std::stack<int> st;

        int num;
        for(auto& token : tokens) {
            if(token=="+") {
                num=st.top();
                st.pop();
                num = num + st.top();
                st.pop();
                st.push(num);
            }else if(token=="-") {
                num=st.top();
                st.pop();
                num = st.top() - num ;
                st.pop();
                st.push(num);
            }else if(token=="*") {
                num=st.top();
                st.pop();
                num = st.top() * num ;
                st.pop();
                st.push(num);
            }else if(token=="/") {
                num=st.top();
                st.pop();
                num = st.top() / num ;
                st.pop();
                st.push(num);
            } else {
                st.push(std::stoi(token));
            }
        }
        return st.top();
    }
};