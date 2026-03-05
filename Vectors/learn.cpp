#include <iostream>
#include <vector>
#include <algorithm> // for sort, reverse, find

using namespace std;

int main() {
    // 1. Creating vectors in different ways
    vector<int> v1;                  // empty vector (size = 0)
    vector<int> v2(5);               // vector of size 5, all elements default-initialized to 0
    vector<int> v3(5, 10);           // vector of size 5, all elements initialized to 10
    vector<int> v4 = {1, 2, 3, 4, 5}; // vector initialized with list of values

    cout << "v4 contents: ";
    for (int x : v4) cout << x << " "; // range-based for loop
    cout << "\n";

    // 2. Adding elements dynamically
    v1.push_back(10); // adds 10 at the end
    v1.push_back(20); // adds 20 at the end
    v1.push_back(30); // adds 30 at the end

    cout << "v1 after push_back: ";
    for (int x : v1) cout << x << " ";
    cout << "\n";

    // 3. Accessing elements
    cout << "First element (operator[]): " << v1[0] << "\n";     // direct access, no bounds check
    cout << "Second element (at()): " << v1.at(1) << "\n";       // safer access, throws exception if out of range
    cout << "Front(): " << v1.front() << "\n";                   // first element
    cout << "Back(): " << v1.back() << "\n";                     // last element

    // 4. Size vs Capacity
    cout << "Size (number of elements): " << v1.size() << "\n";
    cout << "Capacity (allocated space): " << v1.capacity() << "\n";
    // Capacity is usually >= size, and grows automatically when push_back exceeds current capacity.

    // 5. Iterators
    cout << "Iterating with iterators: ";
    for (auto it = v1.begin(); it != v1.end(); ++it) {
        cout << *it << " "; // dereference iterator to get element
    }
    cout << "\n";

    // 6. Modifying elements
    v1[1] = 99; // change second element
    cout << "v1 after modification: ";
    for (int x : v1) cout << x << " ";
    cout << "\n";

    // 7. Removing elements
    v1.pop_back(); // removes last element
    cout << "v1 after pop_back: ";
    for (int x : v1) cout << x << " ";
    cout << "\n";

    // erase() removes element at given position
    v1.erase(v1.begin() + 1); // removes element at index 1
    cout << "v1 after erase: ";
    for (int x : v1) cout << x << " ";
    cout << "\n";

    // clear() removes all elements
    v1.clear();
    cout << "Size after clear: " << v1.size() << "\n"; // should be 0

    // 8. Using algorithms with vectors
    vector<int> nums = {5, 2, 9, 1, 5, 6};
    sort(nums.begin(), nums.end()); // sort ascending
    cout << "Sorted nums: ";
    for (int x : nums) cout << x << " ";
    cout << "\n";

    reverse(nums.begin(), nums.end()); // reverse order
    cout << "Reversed nums: ";
    for (int x : nums) cout << x << " ";
    cout << "\n";

    // 9. Searching with find()
    auto it = find(nums.begin(), nums.end(), 5); // find first occurrence of 5
    if (it != nums.end())
        cout << "Found 5 at index: " << (it - nums.begin()) << "\n"; // iterator arithmetic
    else
        cout << "5 not found\n";

    // 10. 2D Vectors (vector of vectors)
    vector<vector<int>> matrix = {
        {1, 2, 3},   // row 1
        {4, 5, 6},   // row 2
        {7, 8, 9}    // row 3
    };

    cout << "Matrix contents:\n";
    for (auto &row : matrix) {        // iterate over rows
        for (int val : row) cout << val << " "; // iterate over elements in each row
        cout << "\n";
    }

    return 0;
}