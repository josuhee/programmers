//찾아라 프로그래밍 마스터
//게임 맵 최단거리

#include<vector>
#include <iostream>
#include <queue>
using namespace std;

int solution(vector<vector<int> > maps)
{
    int answer = 0;
    int n = maps.size();
    int m = maps[0].size();

    //init
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            maps[i][j] = maps[i][j] == 1 ? 0 : -1;
    
    //bfs
    queue<pair<int, int>> q;
    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};

    q.push({0, 0});
    maps[0][0] = 1;
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        if (x == n - 1 && y == m - 1)
            break ;
        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if (nx >= 0 && ny >= 0 && nx < n && ny < m && maps[nx][ny] == 0)
            {
                maps[nx][ny] = maps[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }
    
    answer = maps[n - 1][m - 1] == 0 ? -1 : maps[n - 1][m - 1];
    return answer;
}