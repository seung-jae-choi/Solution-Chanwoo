#include<iostream>
#include<vector>
#include <algorithm>
#include <utility>
using namespace std;
typedef pair<unsigned int, unsigned int> puiui;
//global variable
int N, cnt(0);

void count();

int main() {
	//set
	ios::sync_with_stdio(false);

	// input
	cin >> N;
	vector<puiui> C(N);
	for (int i = 0; i < N; i++)
		cin >> C[i].second >> C[i].first;

	// sort
	sort(C.begin(), C.end());
	count();
	
	cout << cnt;

	return 0;
}

void count(){
	unsigned int start_point(0);
	for (int i = 0; i < N; i++) {
		if (start_point <= C[i].second) {
			start_point = C[i].first;
			cnt++;
		}
		else
			continue;
	}
}
