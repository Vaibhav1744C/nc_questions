class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int i=0;
        int k=n-1;
        while(i<=k){
            swap(s[i],s[k]);
            i++;
            k--;
        }
        

    }
};