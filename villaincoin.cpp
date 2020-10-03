#include <vector>
#include <algorithm>
#include<iostream>
using namespace std;

void dfs(const vector<vector<int>>& g, vector<int>& a, int v) {
    if (a[v] != -1) {
        return;
    }
    
    int chain = 0;
    for (const int u : g[v]) {
        dfs(g,a,u);
        chain = std::max(chain, a[u]);
    }
    a[v] = 1 + chain;
}

int findLongest(int n, const vector<vector<int>>& g, vector<int>& a) {
    for (int i = 0; i < n; i++) {
        dfs(g,a,i);
    }
    return *std::max_element(a.begin(), a.end());
}

int main() {
	int t;
	cin >> t;
	while (t-- > 0) {
	    int n; cin >> n;
	    int m; cin >> m;
	    vector<vector<int>> g(n);
	    for (int i = 0; i < m; i++) {
	        int u; cin >> u; u--;
	        int v; cin >> v; v--;
	        g[v].push_back(u);
	    }
	    vector<int> a(n, -1);
	    
	    cout << findLongest(n,g,a) << '\n';
	}
	return 0;
}