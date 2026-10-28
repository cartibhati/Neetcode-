class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int s=1;
        int e = *max_element(piles.begin(), piles.end()); 
        int ans=0;
        while(s<=e){
            int mid=s+(e-s)/2;
            long long int totalhrs=0;
            for(int x:piles){
                totalhrs += (x + mid - 1) / mid;
            }
            if (totalhrs <= h) {
                ans = mid;
                e = mid - 1;
            }
            else {
                s = mid + 1;
            }
        }
        return ans;
    }
};