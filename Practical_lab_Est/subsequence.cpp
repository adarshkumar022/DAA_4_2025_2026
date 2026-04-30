#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int LIS(vector<int>& arr) {
    vector<int> temp;

    for(int x : arr) {
        auto it = lower_bound(temp.begin(), temp.end(), x);

        if(it == temp.end()) {
            temp.push_back(x);
        } else {
            *it = x;
        }
    }

    return temp.size();
}

int main() {
    vector<int> arr = {10, 9, 2, 5, 3, 7, 101, 18};
    cout << "Length of LIS = " << LIS(arr);
    return 0;
}