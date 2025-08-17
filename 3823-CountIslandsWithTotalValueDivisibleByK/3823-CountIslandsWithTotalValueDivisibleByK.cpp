// Last updated: 17/8/2025, 11:30:49 pm
class Solution {
public:
    int countIslands(vector<vector<int>>& grid, int key) {
        int m = grid.size(), n = grid[0].size(), cnt = 0;
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        vector<int> dir = {-1, 0, 1, 0, -1};

        function<long long(int, int)> dfs = [&](int i, int j) -> long long {
            if (i < 0 || j < 0 || i >= m || j >= n || grid[i][j] == 0 || visited[i][j])
                return 0;
            visited[i][j] = true;
            long long sum = grid[i][j];
            for (int d = 0; d < 4; ++d)
                sum += dfs(i + dir[d], j + dir[d + 1]);
            return sum;
        };

        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j)
                if (grid[i][j] != 0 && !visited[i][j] && dfs(i, j) % key == 0)
                    cnt++;

        return cnt;
    }
};
