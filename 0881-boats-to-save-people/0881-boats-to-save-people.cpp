class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        
        sort(people.begin(),people.end());

        int left=0;
        int right=people.size()-1;
        int cnt=0;

        while(left<=right){
            int lightes_person=people[left];
            int heaviest_person=people[right];

            int both_wg=lightes_person+heaviest_person;

            if(right!=left && both_wg<=limit){
                
                left++;
            }

            right--;
            cnt++;
           
        }
        return cnt;
    }
};