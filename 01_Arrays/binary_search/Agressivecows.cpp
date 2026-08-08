// Assign C cows to N stalls such that the minimum distance between Them is largest Possible return largest minimum distanve
// N=5 arr={1,2,4,8,9} C=3

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class solution{

public:

    int getDistance(vector<int> &arr, int N,int C){
        sort(arr.begin(), arr.end());
        int low = 0;
        int high = arr[N-1] - arr[0];
        int result = -1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(isPossible(arr, N, C, mid)){
                result = mid;
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return result;
    }

    bool isPossible(vector<int> &arr, int N, int C, int minDist){
        int cows = 1;
        int lastPos = arr[0];
        for(int i = 1; i < N; i++){
            if(arr[i] - lastPos >= minDist){
                cows++;
                lastPos = arr[i];
            }
            if(cows == C){
                return true;
            }
        }
        return false;
    }
};

