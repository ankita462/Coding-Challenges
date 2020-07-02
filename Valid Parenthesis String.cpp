class Solution {
public:
    bool checkValidString(string s) {
        stack <int> s1,s2;
        for(int i=0;i<s.length();i++) {
            if(s[i]=='*') {
                s1.push(i);
            }
            else if(s[i]=='(') {
                s2.push(i);
            }
            else if(s[i]==')') {
                if(!s2.empty()) {
                    s2.pop();
                }
                else if(!s1.empty()) {
                    s1.pop();
                }
                else {
                    return false;
                }
            }
        }
        if(!s2.empty()) {
            while(!s2.empty() && !s1.empty() && s1.top()>s2.top()) {
                s2.pop();
                s1.pop();
            }
        }
        if(s2.empty()) {
            return true;
        }
        return false;
    }
};
