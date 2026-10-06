class Solution {
public:

    int binarySearch(vector<int> vec, int target) {
        int low = 0;
        int high = vec.size()-1;
        int mid;

        while (high >= low) {
            mid = low + floor((high - low) / 2);

            if (vec[mid] == target) {
                cout << "found!: " << mid;
                return target;
            }
            if (vec[mid] > target) {
                high = mid -1;
            } else {
                low = mid + 1;
            }
        }
        cout << "not found: " << -1 << "\n";
        return -1;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for (const vector<int> row: matrix) {
            if (binarySearch(row, target) != -1) {
                return true;
            }
        }
        return false;
    }
};
