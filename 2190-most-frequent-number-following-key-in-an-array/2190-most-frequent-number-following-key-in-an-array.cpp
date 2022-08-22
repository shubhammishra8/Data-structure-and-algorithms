class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
     map<int,int>m;
      for(int i=0;i<nums.size()-1;i++)
      {
        if(nums[i]==key)
        {
          m[nums[i+1]]++;
        }
      }
      int maxk=INT_MIN;
      int maxv=INT_MIN;
      for(auto it= m.begin();it!=m.end();it++)
      {if(it->second>maxv)
      {
        maxk=it->first;
        maxv=it->second;
      }
      

      }
       return maxk;
    }
};