#include <iostream>
#include <climits> // Required for INT32_MIN
#include <algorithm> // Required for max()

using namespace std;

int main() {
    const int n = 5; // Made 'const' so it can be used for the array size
    int arr[n] = {1,2,3,4,5};
    
    int max_sum = INT32_MIN;
    
    for (int st = 0; st < n; st++) {
        int current_sum = 0;
        for (int end = st; end < n; end++) {
            current_sum += arr[end];
            max_sum = max(max_sum, current_sum);
        }
    }
    
    cout << max_sum;
    return 0;
}