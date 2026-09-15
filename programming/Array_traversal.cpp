#include <iostream>
using namespace std;

class Solution {
public:
    void arrayTraversalReverse(int arr[], int n) {

        int arr1[n];

        // Store elements in reverse order
        for (int i = 0; i < n; i++) {
            arr1[i] = arr[n - 1 - i];
        }

        // Print reversed array
        for (int j = 0; j < n; j++) {
            cout << arr1[j] << " ";
        }
    }
};

int main() {

    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution obj;

    obj.arrayTraversalReverse(arr, n);

    return 0;
}