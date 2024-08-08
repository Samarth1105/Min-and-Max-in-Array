class Solution {
  public:
    pair<long long, long long> getMinMax(vector<long long int> arr) {
        // code here
        int max_num= INT_MIN;
        int min_num= INT_MAX;
        int arrSize= arr.size();
        
        for(int i=0;i<arrSize;i++){
            if(arr[i]>max_num){
                max_num = arr[i];
            }
            if(arr[i]<min_num){
                min_num=arr[i];
            }
        }
        pair<int,int> ans;
        ans.first= min_num;
        ans.second=max_num;
        return ans;
    }
};
