#include<iostream>
using namespace std;
int n;
int M[100], N[100], P[100];
int res = 0;
void Try(int i) {
	if (i == n+1) {
		res++;
		return;
	}
	for (int j = 1; j <= n; j++) {
		if (M[j] ==0&& N[j+i] ==0&& P[i-j+n] == 0) {
			M[j] = N[j+i] = P[i-j+n] = 1;
			Try(i + 1);
			M[j] = N[j+i] = P[i-j+n] = 0;
		}
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
		cin >> n;
		res = 0;
		Try(1);
		cout << res << endl;
	}
}










#include <iostream>
#include <vector>

using namespace std;

bool isSafe(vector<vector<int>>& board, int row, int col);
int placeQueen(vector<vector<int>>& board, int col, int res = 0);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> board(n, vector<int> (n, 0));

        cout << placeQueen(board, 0, 0);
        cout<<endl;
    }
}

bool isSafe(vector<vector<int>>& board, int row, int col) {
    int n = board.size();
    int i;
    int j;

    for (j = 0; j < col; j++) {
        if (board[row][j]) {
            return false;
        }
    }

    for (i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j]) {
            return false;
        }
    }

    for (i = row, j = col; i < n && j >= 0; i++, j--) {
        if (board[i][j]) {
            return false;
        }
    }

    return true;
}

int placeQueen(vector<vector<int>>& board, int col, int res) {
    int n = board.size();
    if (col >= n) {
        res++;
        return res;
    }

    for (int i = 0; i < n; i++) {
        if (isSafe(board, i, col)) {
            board[i][col] = 1;
            
            res = placeQueen(board, col + 1, res);

            board[i][col] = 0;
        }
    }

    return res;
}



