#include <iostream>
using namespace std;
int main(){
    int n=5;
    int arr[n]={1,2,3,4,5};
    int max_sum= arr[0];
    int current_sum=0;
    for(int val: arr){
        current_sum+=val;
        max_sum= max(max_sum,current_sum);
        if(current_sum<0){
            current_sum=0;
        }
    }
    cout<<max_sum;
    return 0;
}
// Kadane's Algorithm is used to find the maximum sum of a contiguous subarray in an array of integers. Th
// is algorithm works by iterating through the array and keeping track of the current sum of the 
// subarray. If the current sum becomes negative, it is reset to zero, as a negative sum would 
// decrease the overall sum of any future subarray. The maximum sum encountered during the iteration 
// is stored and returned as the result. This approach has a time complexity of O(n) and a space complexity of O(1),
// making it efficient for large arrays.  