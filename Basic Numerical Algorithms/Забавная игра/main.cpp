#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int maxSegmentLength(const vector<int>& arr, int divisor) {
    int maxLength = 0, currentLength = 0;
    for (int num : arr) {
        if (num % divisor == 0) {
            ++currentLength;
            maxLength = max(maxLength, currentLength);
        } else {
            currentLength = 0;
        }
    }
    return maxLength;
}

int main() {
    int N;
    cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
    int maxValue = *max_element(arr.begin(), arr.end());

    int result = 0;
    for (int divisor = 2; divisor <= maxValue; ++divisor) {
        result = max(result, maxSegmentLength(arr, divisor));
    }

    cout << result << endl;
    return 0;
}
