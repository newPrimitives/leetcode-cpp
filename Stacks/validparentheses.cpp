class Solution {
public:
    bool isValid(string s) {
    	stack<char> st;
        for (int i=0; i<s.size(); i++) { 
        	/**
        	 * If it starts with ([{ it means it might be valid so we push to the stack 
        	 */
			if ((s[i]=='(') ||(s[i]=='[') ||(s[i]=='{')) {
				st.push(s[i]);
			} else {   
			    if (st.empty()) {
			    	return false;
			    } else if ((s[i]==')') && (st.top()!='(')) {
			    	return false;
			    } else if ((s[i]=='}') && (st.top()!='{')) {
			    	return false;
			    } else if ((s[i]==']') && (st.top()!='[')) {
			    	return false;
			    }

			    st.pop();
			}
			 
		}
		return st.empty();
    }
};