class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
    //     priority_queue<int> p;  // max heap by default

    // // Push negatives of first k elements
    // for (int i = 0; i < k; i++) {
    //     p.push(-nums[i]);  // store negatives to simulate min heap
    // }

    // // Process the remaining elements
    // for (int i = k; i < nums.size(); i++) {
    //     if (-nums[i] < p.top()) {  // if current num is bigger than smallest in heap
    //         p.pop();
    //         p.push(-nums[i]);
    //     }
    // }

    // // kth largest is negative of the top element in heap
    // return -p.top();

            priority_queue<int,vector<int>,greater<int>> minheap;

            for(int i=0;i<k;i++){
                minheap.push(nums[i]);
            }

            for(int i=k;i<nums.size();i++){

                if(nums[i]>minheap.top()){
                    minheap.pop();
                    minheap.push(nums[i]);
                }
            }

            return minheap.top();

    }
};