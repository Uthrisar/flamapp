#include <bits/stdc++.h>
using namespace std;

bool isSafe(int row, int col, vector<string>& board, int N) {
    for(int i=0; i<N; i++) {
        if(board[i][col] == 'Q') return false;
    }
    for(int j=0; j<N; j++){
        if(board[row][j] == 'Q') return false;
    }
    for(int i = row, j = col; i>=0 && j>=0; i--, j--) {
        if(board[i][j] == 'Q') return false;
    }
    for(int i = row, j = col; i>=0 && j<N; i--, j++) {
        if(board[i][j] == 'Q') return false;
    }
    return true;
}

void nQueens(int row, vector<string>& board, int N, vector<vector<string>>& ans) {
    if(row == N){
        ans.push_back(board);
        return;
    }
    for(int col = 0; col<N; col++) {
        if(isSafe(row, col, board, N)) {
            board[row][col] = 'Q';
            nQueens(row+1, board, N, ans);
            board[row][col] = '.';
        }
    }
}

int main() {
    int N;
    cin >> N;
    vector<string> board(N);
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            board[i].push_back('.');
        }
    }
    vector<vector<string>> ans;
    nQueens(0, board, N, ans);
    if(ans.size() == 0){
        cout << "No solution exists!!!";
    } else {
        cout<<"[";
        for(int counter=0; counter<ans.size(); counter++){
            cout<<"[";
            for(int i=0; i<N; i++){
                cout<<"'";
                for(int j=0; j<N; j++){
                    cout<<ans[counter][i][j];
                }
                cout<<"'";
                if(i != N-1){
                    cout<<", ";
                }
            }
            cout<<"]";
            if(counter != ans.size()-1){
                cout<<", ";
            }
        }
        cout<<"]";
    }
}