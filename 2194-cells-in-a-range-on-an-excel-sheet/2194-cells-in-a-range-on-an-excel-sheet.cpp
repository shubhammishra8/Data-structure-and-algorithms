class Solution {
public:
    vector<string> cellsInRange(string s) {
        char n1=(s[1]);
      char n2=(s[4]);
      char a1=s[0];
      char a2=s[3];
      vector<string>ans;
      for(char i=a1;i<=a2;i++)
      {
        for(char j=n1;j<=n2;j++)
        {string x="";
         x=x+i;
         x=x+j;
           
           
        
        ans.push_back(x);
        }
      }
      return ans;
      
    }
};