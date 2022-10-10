class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> m;
 
        int i=0;
        int j=0;
        int ans=0;
        while(j<s.length())
        {
            char r = s[j];
            m[r]++;
 
            while(m[r]>1)
            {
                char l = s[i];
                m[l]--;
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};
