#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int>& arr, int target) {
    int start = 0;
    // Cast size to int to avoid signed/unsigned comparison warnings
    int end = static_cast<int>(arr.size()) - 1; 
    
    while (start <= end) {
        int mid = start + (end - start) / 2;
        
        if (arr[mid] > target) {
            end = mid - 1;
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            return mid; // Target found
        }
    }
    return -1; // Target not found
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 4;
    int result = binarySearch(arr, target);
    
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    return 0;
}