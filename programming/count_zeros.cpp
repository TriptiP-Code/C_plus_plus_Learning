#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int countZeroes(vector<int>& arr) {
        
        int count = 0;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == 0) {
                count++;
            }
        }

        return count;
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

    Solution obj;

    int result = obj.countZeroes(arr);

    cout << "Number of zeroes: " << result;

    return 0;
}