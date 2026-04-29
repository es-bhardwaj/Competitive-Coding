class Solution {
  public:
    bool isCycle(int V, vector<vector<int>>& edges) {
        vector<vector<int>> adj(V);
        for (auto &e : edges) {
            int u = e[0], v = e[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<bool> vis(V, false);
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                queue<pair<int,int>> q;
                q.push({i, -1});
                vis[i] = true;

                while (!q.empty()) {
                    int node = q.front().first;
                    int pt = q.front().second;
                    q.pop();
                    for (int nbr : adj[node]) {
                        if (!vis[nbr]) {
                            vis[nbr] = true;
                            q.push({nbr, node});
                        }
                        else if (nbr != pt) {
                            return true;    //Cycle exists
                        }
                    }
                }
            }
        }
        return false;    //No cycle
    }
};