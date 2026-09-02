class Solution {
public:

    string encode(vector<string>& strs) {
        std::string out;

        for(const std::string& str:strs)
        {
            out+=to_string(str.size())+"#"+str;
        }
        return out;
    }

    vector<string> decode(string s) {
        std::vector<std::string> out;
        int i=0;
        int a=0;
        int b=0;
        int size=s.size();
        while(i<size)
        {
            a=s.find('#',i);
            b=std::stoi(s.substr(i,a-i));
            i=a+1;
            out.push_back(s.substr(i,b));
            i=i+b;
        }
        return out;
    }
};
