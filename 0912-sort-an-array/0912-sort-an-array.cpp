class Solution {
public:

    void merge(int low,int mid,int high,vector<int>& nums){
        int i=low;
        int j=mid+1;
        int k=0;

        vector<int> temp(high-low+1);

        while(i<=mid && j<=high){
            if(nums[i]<nums[j]){
                temp[k++]=nums[i++];
            }
            else{
                temp[k++]=nums[j++];
            }
        }

        while(i<=mid){
            temp[k++]=nums[i++];
        }

        while(j<=high){
            temp[k++]=nums[j++];
        }

        for(int x=0;x<k;x++){
            nums[x+low]=temp[x];
        }
    }

    void mergesort(int low,int high,vector<int>& nums){
        if(low<high){
            //At list 2 ele is there
            int mid=low+(high-low)/2;
            mergesort(low,mid,nums);
            mergesort(mid+1,high,nums);
            merge(low,mid,high,nums);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        mergesort(0,nums.size()-1,nums);
        return nums;
    }
};