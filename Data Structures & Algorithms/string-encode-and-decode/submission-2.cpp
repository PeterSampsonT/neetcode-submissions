class Solution {
public:

    string encode(vector<string>& strs) {
        std::string out="";
        for(int i=0;i<strs.size();i++)
        {
            out+=std::to_string(strs[i].length())+'#'+strs[i];
        }
        return out;
    }

    vector<string> decode(string s) {
        int b=0;
        int f,l=0;
        std::vector<std::string> out;
        while(b<s.length())
        {
            f=s.find('#',b);
            l=f-b;
            l=std::stoi(s.substr(b,l));
            b=f+1;
            out.push_back(s.substr(b,l));
            b=b+l;
        }
        return out;
    }
};
