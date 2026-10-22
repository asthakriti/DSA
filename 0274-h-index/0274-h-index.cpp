class Solution {
public:
    int hIndex(vector<int>& citations) {
        int low=0;int high=citations.size()-1;
        int n=citations.size();

        int h=0;
        int cnt=0;
        int ans=0;

        while(low<=high){
            int mid=low+(high-low)/2;

            h=mid+1;

            for(int i=0;i<n;i++){
                if(citations[i]>=h){
                    cnt++;
                }
            }

            if(cnt>=h){
                ans=h;
                low=mid+1;
                
            }
            else{
                high=mid-1;
                
            }
            cnt=0;
        }

        return ans;

    }
};