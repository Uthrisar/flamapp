#include <bits/stdc++.h>
using namespace std;

bool dfs(int v, vector<vector<int>>& graph, vector<bool>& vis, vector<bool>& recStack) {
    if(!vis[v]) {
        vis[v] = true;
        recStack[v] = true;
        for(auto child : graph[v]) {
            if(!vis[child] && dfs(child, graph, vis, recStack)) {
                return true;
            } else if (recStack[child]) {
                return true;
            }
        }
    }
    recStack[v] = false;
    return false;
}

bool hasCircularDependency(int n, vector<vector<int>>& edges) {
    vector<vector<int>> graph(n);
    for(const auto& edge : edges) {
        int a = edge[0];
        int b = edge[1];
        graph[a].push_back(b);
    }
    vector<bool> vis(n, false);
    vector<bool> recStack(n, false);
    for(int i=0; i<n; i++) {
        if(!vis[i] && dfs(i, graph, vis, recStack)) {
            return true;
        }
    }
    return false;
}

// int main(){
//     int n, m;
//     cin>>n>>m;
//     vector<vector<int>> edges;
//     for(int i=0; i<m; i++){
//         int a, b;
//         cin>>a>>b;
//         edges.push_back({a, b});
//     }
//     if(hasCircularDependency(n, edges)){
//         cout<<"true";
//     } else {
//         cout<<"false";
//     }
// }