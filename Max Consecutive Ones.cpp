 int findMaxConsecutiveOnes(vector<int>& arr) {
        
        int count=0,ans=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==1){
                count++;
                ans=max(ans,count);
            }
            else{
                count=0;
            }
        }
        return ans;
    }
