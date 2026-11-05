class Solution {
public:
    int jump(vector<int>& nums) {
      
      //if i am going from left to right 
      //through i 
      //i will find max_farth i can go using all idx
      int jump=0;
      int max_far=0;
      int cur_edge=0;

    for(int i=0;i<nums.size()-1;i++){
      max_far=max(max_far,i+nums[i]);

      if(i==cur_edge){
        //i need to take jump
        jump++;
        cur_edge=max_far;
      }
    }
    return jump;
    }

};