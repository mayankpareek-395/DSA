#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> nums = {5, 2, 9, 1, 5, 6};

    sort(nums.begin(), nums.end());  // sort using STL algorithm

    for (int n : nums) {
        cout << n << " ";
    }
    return 0;
}