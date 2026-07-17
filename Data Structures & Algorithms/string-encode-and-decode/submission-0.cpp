class Solution {
public:

    string encode(vector<string>& strs) {
        string res="";
        for(string s:strs){
            res+=to_string(s.length());
            res+="#";
            res+=s;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        
        int i=0;
        while(i<s.length()){
            string len="";
            while(s[i]!='#'){
                len+=s[i];
                i++;
            }
            int size=stoi(len);
            i++;
            ans.push_back(s.substr(i,size));
            i+=size;
        }
        return ans;
    }
};
