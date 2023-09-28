//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> d;
    // Function to return a list containing the DFS traversal of the graph.
    
    void dir(vector<int> adj[],int i, vector<bool> &v)
    {
        v[i]=true;
        d.push_back(i);
        for(auto g: adj[i]){
            if(v[g]==false)
                dir(adj,g,v);
        }
    }
    
    vector<int> dfsOfGraph(int V, vector<int> adj[])
    {
        vector<bool> v(V,false);
        dir(adj,0,v);
        return d;
    }
};



//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends