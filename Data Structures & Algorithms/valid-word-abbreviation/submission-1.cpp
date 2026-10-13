class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int n = abbr.length();
        int m = word.length();

        int l = 0, r = 0;

        while(l < m && r < n){
            if(word[l] == abbr[r]){
                l++;
                r++;
            }
            else if(abbr[r] >= '0' && abbr[r] <= '9'){
                if(abbr[r] == '0')
                    return false;
                int num = 0;
                while(r < n && abbr[r] >= '0' && abbr[r] <= '9'){
                    num = num*10 + (abbr[r] - '0');
                    r++;
                }
                l += num;
            }
            else{
                return false;
            }
        }
        return l == m && r == n;
    }
};