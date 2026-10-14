class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int left=0;
        int right=height.size()-1;
        int max_area=0;

        while(left<right){
            if(height[left]<height[right]){
                int area=height[left]*(right-left);
                max_area=max(max_area,area);
                left++;
            }
            else{int area=height[right]*(right-left);
                    max_area=max(max_area,area);
                    right--;}
        }

        return max_area;
        
    }
}; 