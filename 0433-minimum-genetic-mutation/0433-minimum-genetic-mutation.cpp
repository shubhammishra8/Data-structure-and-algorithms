class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        queue<pair<string,int>> q;
        q.push({start,0});
        unordered_set<string> vis, bk(bank.begin(),bank.end());
        vis.insert(start);
        string arr[]={"A","C","G","T"};
        while(!q.empty()){
            string s = q.front().first;
            int val= q.front().second;
            if(s==end) return val;
            q.pop();
            string temp=s;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<4;j++)
                {
                    string pre=temp.substr(0,i);
                    string suf=temp.substr(i+1);
                    if(!vis.count(pre+arr[j]+suf) and bk.count(pre+arr[j]+suf))
                    {
                        q.push({pre+arr[j]+suf,val+1});
                        vis.insert(pre+arr[j]+suf);
                    }
                }
            }
        }
        return -1;
    }
};