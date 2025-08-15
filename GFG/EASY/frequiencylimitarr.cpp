class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int> v(n,0);
        for(int i=0;i<arr.size();i++){
            int num=arr[i];
            if(num>=1 && num<=n){
                v[num-1]++;
            }
        }
        return v;
    }
};
