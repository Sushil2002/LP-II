#include <bits/stdc++.h>
#include <iostream>
using namespace std;
signed main()
{
    int n;
    cout << "Enter the Number of Vertex - ";
    cin >> n;
    vector<pair<int, int>> adj[n];
    int e;
    cout << "Enter the Number of edges - ";
    cin >> e;
    for (int i = 0; i < e; i++)
    {
        int u, v, w;
        cout << "Enter the src,dest and weight - ";
        cin >> u >> v >> w;
        adj[u].push_back({w, v});
        adj[v].push_back({w, u});
    }
    int src;
    cout << "Enter the Source - ";
    cin >> src;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    vector<int> dist(n, INT_MAX);
    dist[src] = 0;
    q.push({0, src});
    while (!q.empty())
    {
        auto it = q.top();
        q.pop();
        int wt = it.first;
        int node = it.second;
        for (auto i : adj[node])
        {
            int adjwt = i.first;
            int adjedge = i.second;
            if (wt + adjwt < dist[adjedge])
            {
                dist[adjedge] = wt + adjwt;
                q.push({dist[adjedge], adjedge});
            }
        }
    }
    for (auto &i : dist)
    {
        cout << i << " ";
    }
    return 0;
}
