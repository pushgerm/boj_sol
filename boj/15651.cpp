#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<int> v;

void dfs(int pivot, int cnt) {
	if (cnt == 0) {
		for (int num : v) {
			cout << num << ' ';
		}
		cout << '\n';
		return;
	}
	for (int i = 1 ; i <= n; i++) {
		v.push_back(i);
		dfs(i, cnt - 1);
		v.pop_back();
	}
}

int main() {
	cin >> n >> m;
	dfs(1, m);
}
