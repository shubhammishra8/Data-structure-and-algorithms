class Solution {
public:
    int minDeletions(string s) {
      vector<int>v(26,0);
  int ans=0;
      for(int i=0;i<s.length();i++)
      {
        v[s[i]-'a']++;
        
      }
      set<int>st;
      for(int i=0;i<26;i++)
        
      {
        while(v[i]&&st.find(v[i])!=st.end())
        {
          ans++;
          v[i]--;
        }
        
        
          st.insert(v[i]);
        
      }
      return ans;
      
    }
};