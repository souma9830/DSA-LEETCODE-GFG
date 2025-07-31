class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int n=arr.size()+1;
        long long total=(1LL* n*(n+1))/2;
        long long sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }
        return total-sum;
    }
};