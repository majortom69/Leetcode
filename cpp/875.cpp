class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, r = *std::max_element(piles.begin(), piles.end());
         int result = r, k;
        
       
         unsigned int hours;
        
         while (l <= r) {
             k = (r-l) / 2  +l, hours = 0;
             
             for (int pile : piles) {
                 hours += (pile + k - 1) / k;
             }
        
             if (hours <= h) {
                 result = k;
                 r = k - 1;
             }
             else  {
                 l = k + 1;
             }      
         }
        
         return result;
    }
};