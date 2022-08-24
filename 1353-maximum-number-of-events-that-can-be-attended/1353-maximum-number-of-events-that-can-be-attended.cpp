class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        sort(events.begin(),events.end());
     
       priority_queue<int, vector<int>, greater<int> > pq;
     
    int i=0;
      int n=events.size();
      int ans=0;
      int day;
      while(i<n||!pq.empty())
      {  if(pq.size() == 0)
                day = events[i][0];
        while(i<n&&events[i][0]==day)
        {pq.push(events[i][1]);
          i++;
        }
       pq.pop();
       day++;
       
       ans++;
       while(pq.size()&&pq.top()<day)
       {
         pq.pop();
       }
       
      }
      return ans;
         
      
    }
};