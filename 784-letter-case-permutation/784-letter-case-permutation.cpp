class Solution {
public:vector<string>ans;
  void solve(string curr,string s,int i)
  {
    if(i==s.size())
      {ans.push_back(curr);
    return;}
    if(isdigit(s[i])){
      curr=curr+s[i];
    solve(curr,s,i+1);}
    else
    {string cur=curr;
      cur.push_back(tolower(s[i]));
      solve(cur,s,i+1);
     string cu=curr;
     cu.push_back(toupper(s[i]));
     solve(cu,s,i+1);
    }
    
    
  }
    vector<string> letterCasePermutation(string s) {
        solve("",s,0);
      return ans;
    }
};