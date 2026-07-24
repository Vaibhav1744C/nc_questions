class Solution {
public:
    bool isPalindrome(string s) {
        
        int i=0;
       
        string filtered="";
        for(char ch:s){
            if(isalnum(ch)){
                filtered+=tolower(ch);
            }
        }
        int n=filtered.size();
        int k=n-1;
        while(i<k){
            if(filtered[i]!=filtered[k]){
                return false;
            }
            i++;
            k--;
        }
        return true;

    }
};
