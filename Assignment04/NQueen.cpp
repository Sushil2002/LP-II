#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
class Solution
{
public:
    void solve(int col, vector<vector<string>> &ans, vector<string> &board, int n, vector<int> &leftrow, vector<int> &upperrow, vector<int> &lowerrow)
    {
        if (col == n)
        {
            ans.push_back(board);
            return;
        }
        for (int row = 0; row < n; row++)
        {
            if (leftrow[row] == 0 and upperrow[row + col] == 0 and lowerrow[n - 1 + col - row] == 0)
            {
                board[row][col] = 'Q';
                leftrow[row] = 1;
                upperrow[row + col] = 1;
                lowerrow[n - 1 + col - row] = 1;
                solve(col + 1, ans, board, n, leftrow, upperrow, lowerrow);
                board[row][col] = '.';
                leftrow[row] = 0;
                upperrow[row + col] = 0;
                lowerrow[n - 1 + col - row] = 0;
            }
        }
    }
    vector<vector<string>> Queen(int n)
    {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n, '.');
        for (int i = 0; i < n; i++)
        {
            board[i] = s;
        }
        vector<int> leftrow(n, 0), upperrow(2 * n - 1, 0), lowerrow(2 * n - 1);
        solve(0, ans, board, n, leftrow, upperrow, lowerrow);
        return ans;
    }
};
signed main()
{
    int n; // we are taking 4*4 grid and 4 queens
    cout << "Enter the Number of Queens - ";
    cin >> n;
    Solution obj;
    vector<vector<string>> ans = obj.Queen(n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "Arrangement " << i + 1 << "\n";
        for (int j = 0; j < ans[0].size(); j++)
        {
            cout << ans[i][j];
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}