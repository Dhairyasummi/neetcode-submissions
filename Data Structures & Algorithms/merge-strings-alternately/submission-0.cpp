class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();

        string s;

        int i = 0;
        int j = 0;

        while(i < n || j < m){
            if(i < n)
                s.push_back(word1[i++]);
            if(j < m)
                s.push_back(word2[j++]);
        }
        return s;
    }
};