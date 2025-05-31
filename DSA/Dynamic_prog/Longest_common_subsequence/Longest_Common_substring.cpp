#include<bits/stdc++.h>
using namespace std;

/*
Problem: Longest common substring
It is continuous string.
Ex. geekforgeeks
    geekQuiz
    output : 4 , geek
*/

int main(){
    string a;
    string b;
    cin>>a>>b;
    int m = a.length();
    int n = b.length();
	vector<vector<int>> t(m + 1, vector<int>(n + 1, 0));
	int best_count = 0;

	for (int i = 1; i < m + 1; i++)
		for (int j = 1; j < n + 1; j++)
			if (a[i - 1] == b[j - 1]) {
				t[i][j] = 1 + t[i - 1][j - 1];
				best_count = max(t[i][j], best_count);
			}
			else
				t[i][j] = 0;

	cout<< best_count;
}