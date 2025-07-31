class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n=arr.size();
        int max=INT_MIN;
        int smax=INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]>smax && arr[i]<max){
                smax=arr[i];
            }
        }
        if(smax==INT_MIN){
            return -1;
        }
        return smax;
    }
};