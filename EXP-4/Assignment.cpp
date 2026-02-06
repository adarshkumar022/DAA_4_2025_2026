#include <bits/stdc++.h>
using namespace std;

int main() {
    int K = 3;
    int N = 6;

    vector<int> scores = {10, 20, 5, 15, 25, 8};

    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (int i = 0; i < N; i++) {
        int score = scores[i];

        minHeap.push(score);

        if (minHeap.size() > K) {
            minHeap.pop();
        }

        if (minHeap.size() < K) {
            cout << -1 << endl;
        } else {
            cout << minHeap.top() << endl;
        }
    }

    return 0;
}
