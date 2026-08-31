#include <iostream>
using namespace std;
bool check(int i, int j, int n, int m)
{
    return i >= 0 && j >= 0 && i < n && j < m;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }

        int x, y;
        cin >> x >> y;
        x--;
        y--;
        bool f = true;
        int dx[8] = {1, -1, 0, 0, 1, 1, -1, -1};
        int dy[8] = {0, 0, 1, -1, 1, -1, 1, -1};
        for (int i = 0; i < 8; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (check(nx, ny, n, m) && a[nx][ny] == '.')
        {
            f = false;
            break;
        }
        }
        
        
    }
    
}