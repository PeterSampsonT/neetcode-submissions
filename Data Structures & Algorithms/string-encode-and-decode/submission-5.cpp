class Solution {
public:

    string encode(vector<string>& strs) {
        std::string out;
        for(std::string& str : strs)
        {
            out+=std::to_string(str.length())+"#"+str;
        }
        return out;
    }

    vector<string> decode(string s) {
        std::vector<std::string> out;
        int b=0;
        int f,l=0;
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
