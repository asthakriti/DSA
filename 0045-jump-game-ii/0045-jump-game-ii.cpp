class Solution {
public:
    int jump(vector<int>& nums) {
      int jump=0;
      int cur_end=0;
      int farthest=0;

      for(int i=0;i<nums.size()-1;i++){
        //current idx ke jump se farthest kaha ja saktte hai 
        farthest=max(farthest,i+nums[i]);

        //if i reached the last edge: means jo pehle jump lene ke baad mai jaha aayi o idx ab aa gya hai kind of khai ab nhext jump ki need hai
        if(i==cur_end){
            //i need one more jump because i reached at the end of the edge
            //edge means: the last point you can reach after the first jump
            jump++;
            
            //now adding this jump you will have a new last edge
            cur_end=farthest;
        }
      }

      return jump;
    }
};