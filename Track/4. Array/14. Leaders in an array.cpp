class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int arr[], int n) {
    vector<int> ans;
    int leader = INT_MIN;
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= leader) leader = arr[i], ans.push_back(leader);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
};
