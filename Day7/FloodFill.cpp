#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        stack <pair<int , int>> st;
        vector<vector<int>> visited(image.size() , vector<int>(image[0].size() , 0));
        st.push({sr , sc});
        int x[] = {1 , -1 , 0 , 0};
        int y[] = {0 , 0 , 1 , -1};
        int sp = image[sr][sc];
        while(!st.empty()){
            auto pos = st.top();
            st.pop();
            if(visited[pos.first][pos.second] == 1) continue;
            visited[pos.first][pos.second] = 1;
            image[pos.first][pos.second] = newColor;
            for(int i = 0 ; i < 4 ; i++){
                if(pos.first + x[i] >= 0 && pos.first + x[i] < image.size() && pos.second + y[i] >= 0 
                   && pos.second + y[i] < image[0].size() && 
                   image[pos.first + x[i]][pos.second + y[i]] == sp &&
                   visited[pos.first + x[i]][pos.second + y[i]] == 0){
                    st.push({pos.first + x[i] , pos.second + y[i]});
                }
            }
        }
        return image;
    }
};