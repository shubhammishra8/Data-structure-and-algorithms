class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>ans;
      set<int>s1;
      set<int>s2;
      for(int i=0;i<nums1.size();i++)
      {
        s1.insert(nums1[i]);
      }
      for(int i=0;i<nums2.size();i++)
      {
        s2.insert(nums2[i]);
      }
      vector<int>temp1;
      for(auto y:s1 )
      {
        if(s2.find(y)==s2.end())
      {temp1.push_back(y);
        
      }

      }
      ans.push_back(temp1);
     vector<int>temp2;
      for(auto x:s2 )
      {
        if(s1.find(x)==s1.end())
      {temp2.push_back(x);
        
      }

      }
       ans.push_back(temp2);
      
      return ans;
      
    }
};