#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& arr, int x) {

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == x) {
                return i;
            }
        }

        return -1;
    }
};

int main() {

    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x;

    cout << "Enter element to search: ";
    cin >> x;

    Solution obj;

    int result = obj.search(arr, x);

    cout << "Index of element: " << result;

    return 0;
}