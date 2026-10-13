class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s;
        int n = word1.length();
        int m = word2.length();

        int i = 0;
        int j = 0;

        while(i < n && j < m){
            s.push_back(word1[i++]);
            s.push_back(word2[j++]);
        }
        while(i < n)
            s.push_back(word1[i++]);
        while(j < m)
            s.push_back(word2[j++]);
        return s;
    }
};