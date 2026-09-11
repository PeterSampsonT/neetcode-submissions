class Solution {
public:
	bool isValid(std::string s) {
		std::vector<char> buffer;
		buffer.reserve(s.size());
		std::stack<char,std::vector<char>> st(std::move(buffer));

		for(int i=0;i<s.size();i++){
			char ch=s[i];

			if(ch=='(' || ch=='[' || ch=='{'){
				st.push(ch);
			}else{
				if(st.empty())return false;

				if(ch==')' && st.top()!='(')return false;
				if(ch=='}' && st.top()!='{')return false;
				if(ch==']' && st.top()!='[')return false;

				st.pop();
			}
		}

		return st.empty();
	}
};
