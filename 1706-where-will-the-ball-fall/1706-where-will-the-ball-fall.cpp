class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        	int m = grid.size() , n = grid[0].size();

		vector<int> v(n,-1);

		for(int j = 0; j < n; j++){
			int i = 0 , k = j;
			bool flag = false;
			while(i <= m || k <= n){
				if(k == n || k < 0){
					flag = true;
					break;
				}
				if(i == m)break;
				if(k < n-1 && grid[i][k] == 1 && grid[i][k+1] == -1){
					flag = true;
					break;
				}
				if(k > 0 && grid[i][k-1] == 1 && grid[i][k] == -1){
					flag = true;
					break;
				}
				if(grid[i][k] == 1){
					i += 1;
					k += 1;
				}
				else{
					i += 1;
					k -= 1;
				}
			}
			if(flag == false)v[j] = k; 
		}

		return v;
    }
};