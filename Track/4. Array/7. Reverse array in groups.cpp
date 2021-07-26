class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        for (int i = 0; i < n; i += k) {
        int idx1 = i, idx2;
        idx2 = min(i + (k - 1), n-1);
        while (idx1 < idx2) {
            swap(arr[idx1++], arr[idx2--]);
        }
    }
    }
};
