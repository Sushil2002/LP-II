#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Number of Vertex - ";
    cin >> n;
    int e;
    cout << "Enter the Number of Edges - ";
    cin >> e;
    vector<pair<int, int>> adj[n]; //{ node,wt}
    for (int i = 0; i < e; i++)
    {
        int u, v, w;
        cout << "\nEnter src,dest and wt - ";
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    int h[n];
    int g[n];
    int f[n];
    cout << "\nEnter the Huristic Value - ";
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    g[0] = 0;
    f[0] = g[0] + h[0];
    for (int i = 1; i < n; i++)
    {
        g[i] = INT_MAX;
    }
    vector<int> par(n, -1);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    q.push({f[0], 0}); // f(n),node
    while (!q.empty())
    {
        auto it = q.top();
        int parent = it.second;
        q.pop();
        for (auto i : adj[parent])
        {
            int child = i.first;
            int weight = i.second;
            int dist = g[parent] + weight;
            if (dist < g[child])
            {
                g[child] = dist;
                f[child] = g[child] + h[child];
                q.push({f[child], child});
                par[child] = parent;
            }
        }
    }
    int i = n - 1;
    vector<int> path;
    while (i != -1)
    {
        path.push_back(i);
        i = par[i];
    }
    reverse(path.begin(), path.end());
    cout << "path is" << endl;
    for (auto c : path)
    {
        cout << c << "-->";
    }
    return 0;
}
