class Solution {
public:
    string removeDuplicateLetters(string s) {
   vector<int>m(26,0);
      vector<int>vis(26,0);
      for(int i=0;i<s.length();i++)
      {
        m[s[i]-'a']++;
      }
     string ans="";
      for(int i=0;i<s.length();i++)
      {m[s[i]-'a']--;
       if(!vis[s[i]-'a']){while(ans.length()>0&&ans.back()>s[i]&&m[ans.back()-'a']>0)
       {vis[ans.back()-'a']=0;
         ans.pop_back();
       }
       ans=ans+s[i];
       vis[s[i]-'a']=1;
                         }
      }
      return ans;
    
    }
};