#include <cmath>
#include <climits>
#include <vector>
using namespace std;

class Solution {
public:

    long long fun(int num,vector<int>& piles){
        int ans;
        long long sum=0;
        for(int i=0;i<piles.size();i++){
            

            if(piles[i]%num==0){
                ans=piles[i]/num;
            }

            else if(piles[i]<num){
                ans=1;
            }

            else{
                 ans = piles[i] / num + 1;
            }

            sum += ans;
        }

        return sum;
    }
   
    int minEatingSpeed(vector<int>& piles, int h) {
       int largest = *max_element(piles.begin(), piles.end())  ;
       int r_ans;

       int low=1;int high=largest;

       while(low<=high){
        int mid=low+(high-low)/2;

        long long ans=fun(mid,piles);

        if(ans>h){
            low=mid+1;
            
        }

        else{
            high=mid-1;
            r_ans=mid;
        }

        
       }

       return r_ans;
    }
};
