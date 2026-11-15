#include <cmath>
#include <climits>
#include <vector>
using namespace std;

class Solution {
public:

    long long calculate_hour(int k, vector<int>& piles){

        long long hour=0;

        for(int pile=0;pile<piles.size();pile++){

            hour+=piles[pile]/k;

            if(piles[pile]%k != 0) hour++;

        }

        return hour;
    }
    

    
   
    int minEatingSpeed(vector<int>& piles, int h) {
      

      int low=1; int high= *max_element(piles.begin(),piles.end());

      int ans=0;

      while(low<=high){

        int mid=low+(high-low)/2;

        long long hours = calculate_hour(mid,piles);

        if(h>=hours){
            ans=mid;
            high=mid-1;
        }

        else low=mid+1;
      }
      return ans;
      
    }
};
