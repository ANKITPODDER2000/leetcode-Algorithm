#include <bits/stdc++.h>
using namespace std;

class Solution {
    bool isPossiblePos(int i , int j , int n , int m, vector<vector<int>> &visited,
                      vector<vector<int>> &grid){
        return (i>=0 && i < n && j >= 0 && j < m && visited[i][j] == 0 && grid[i][j]==1);
    }
    int bfs(vector<vector<int>> &visited , int sr , int sc , int n , int m,
           vector<vector<int>> &grid){
        int x[] = {1 , -1 , 0 , 0};
        int y[] = {0 , 0 , 1 , -1};
        stack<pair<int , int>> st;
        st.push({sr , sc});
        visited[sr][sc] = 1;
        int count = 0;
        
        while(!st.empty()){
            auto pos = st.top();
            st.pop();
            count++;
            
            for(int i = 0 ; i < 4 ; i++){
                if(isPossiblePos(pos.first+x[i] , pos.second+y[i] , n , m , visited , grid)){
                    visited[pos.first+x[i]][pos.second+y[i]] = 1;
                    st.push({pos.first+x[i] , pos.second+y[i]});
                }
            }
        }
        return count;
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size() , m = grid[0].size();
        vector<vector<int>> visited(n , vector<int>(m , 0));
        int MaxArea = 0;
        
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(grid[i][j]==1 && visited[i][j]==0){
                    MaxArea = max(MaxArea , bfs(visited , i , j , n , m , grid));
                    cout << MaxArea << endl;
                }
            }
        }
        
        return MaxArea;
    }
};