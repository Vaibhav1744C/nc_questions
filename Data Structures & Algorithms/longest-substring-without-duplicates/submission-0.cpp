class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>m;

        int n=s.size();
        int i=0;
        int maxlen=0;
        for(int j=0;j<n;j++){
            m[s[j]]++;
            while(m[s[j]]>1){
                m[s[i]]--;
                i++;
            }
            maxlen=max(maxlen,j-i+1);
        }
        return maxlen;
        
    }
};