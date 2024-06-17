#include<iostream>
#include<vector>
#include<string>
using namespace std;


vector <vector<int>> result;

bool up(vector<vector<char>>&grid, string &word, int x, int y, int level){
    if(level == word.length()){
        vector<int> a = {x,y};
        return true;
    }
    else{
        if(x-level>=0 and grid[x-level][y] == word[level]){
            return up(grid,word,x,y,level+1);
        }
        else{
            return false;
        }
    }
}

bool down(vector<vector<char>>&grid, string &word, int x, int y, int level){
    if(level == word.length()){
        vector<int> a = {x,y};
        return true;
    }
    else{
        if(x+level<grid.size() and grid[x+level][y] == word[level]){
            return down(grid,word,x,y,level+1);
        }
        else{
            return false;
        }
    }
}

bool left(vector<vector<char>>&grid, string &word, int x, int y, int level){
    if(level == word.length()){
        vector<int> a = {x,y};
        return true;
    }
    else{
        if(y-level>=0 and grid[x][y-level] == word[level]){
            return left(grid,word,x,y,level+1);
        }
        else{
            return false;
        }
    }
}

bool right(vector<vector<char>>&grid, string &word, int x, int y, int level){
    if(level == word.length()){
        vector<int> a = {x,y};
        return true;
    }
    else{
        if(y+level<grid[0].size() and grid[x][y+level] == word[level]){
            return right(grid,word,x,y,level+1);
        }
        else{
            return false;
        }
    }
}

bool d_r_up(vector<vector<char>>&grid, string &word, int x, int y, int level){
    if(level == word.length()){
        vector<int> a = {x,y};
        return true;
    }
    else{
        if(x-level>=0 and y+level<grid[0].size() and grid[x-level][y+level] == word[level]){
            return d_r_up(grid,word,x,y,level+1);
        }
        else{
            return false;
        }
    }
}

bool d_l_up(vector<vector<char>>&grid, string &word, int x, int y, int level){
    if(level == word.length()){
        vector<int> a = {x,y};
        return true;
    }
    else{
        if(x-level>=0 and y-level<grid[0].size() and grid[x-level][y-level] == word[level]){
            return d_l_up(grid,word,x,y,level+1);
        }
        else{
            return false;
        }
    }
}

bool d_r_down(vector<vector<char>>&grid, string &word, int x, int y, int level){
    if(level == word.length()){
        vector<int> a = {x,y};
        return true;
    }
    else{
        if(x+level<grid.size() and y+level<grid[0].size() and grid[x+level][y+level] == word[level]){
            return d_r_down(grid,word,x,y,level+1);
        }
        else{
            return false;
        }
    }
}

bool d_l_down(vector<vector<char>>&grid, string &word, int x, int y, int level){
    if(level == word.length()){
        vector<int> a = {x,y};
        return true;
    }
    else{
        if(x+level<grid.size() and y-level<grid[0].size() and grid[x+level][y-level] == word[level]){
            return d_l_down(grid,word,x,y,level+1);
        }
        else{
            return false;
        }
    }
}

vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
    // Code here
    
    for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid[0].size();j++){
            if(up(grid, word, i, j, 0)){
                result.push_back({i,j});
            }
            else if(down(grid, word, i, j, 0)){
                result.push_back({i,j});
            }
            else if(left(grid, word, i, j, 0)){
                result.push_back({i,j});
            }
            else if(right(grid, word, i, j, 0)){
                result.push_back({i,j});
            }
            else if(d_r_up(grid, word, i, j, 0)){
                result.push_back({i,j});
            }
            else if(d_r_down(grid, word, i, j, 0)){
                result.push_back({i,j});
            }
            else if(d_l_up(grid, word, i, j, 0)){
                result.push_back({i,j});
            }
            else if(d_l_down(grid, word, i, j, 0)){
                result.push_back({i,j});
            }
        }
    }
    return result;
}

int main(){
    vector<vector<char>> grid = {
        {'a', 'b', 'c'},
        {'d', 'b', 'f'},
        {'a', 'h', 'i'}
    };

    string word = "abc";

    vector<vector<int>> result = searchWord(grid, word);

    for (auto row : result) {
        for (auto col : row) {
            cout << col << " ";
        }
        cout << endl;
    }

    return 0;
}