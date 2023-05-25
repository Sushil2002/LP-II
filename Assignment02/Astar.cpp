#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, edges;
    cin >> n >> edges;
    vector<pair<int, int>> graph[n];
    for (int i = 0; i < edges; i++)
    {
        int a, b, w;
        cout << "enter src dest weight" << endl;
        cin >> a >> b >> w;
        graph[a].push_back({b, w});
        graph[b].push_back({a, w});
    }
    int hr[n];
    int f[n];
    int g[n];
    cout << "enter the heuristic value one by one-" << n << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> hr[i];
    }

    g[0] = 0;
    f[0] = g[0] + hr[0];
    for (int i = 1; i < n; i++)
    {
        g[i] = INT_MAX;
    }
    vector<int> pr(n, -1);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({f[0], 0});//f(n),wt
    while (!pq.empty())
    {
        auto front_pair = pq.top();
        int parent = front_pair.second;
        pq.pop();
        for (auto c : graph[parent])
        {
            int child = c.first;
            int weight = c.second;
            int dist = g[parent] + weight;
            if (dist < g[child])
            {
                g[child] = dist;
                f[child] = dist + hr[child];
                pq.push({f[child], child});
                pr[child] = parent;
            }
        }
    }
    int dest = n - 1;
    int i = dest;
    vector<int> path;
    while (i != -1)
    {
        path.push_back(i);
        i = pr[i];
    }
    reverse(path.begin(), path.end());
    cout << "path is" << endl;
    for (auto c : path)
    {
        cout << c << "-->";
    }
}