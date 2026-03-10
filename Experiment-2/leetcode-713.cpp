class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int lt=0, rt=nums.size()-1, count=0;
        while(lt<=rt){
            int pr=1, i=lt;
            while(i<=rt){
                pr=pr*nums[i];
                if(pr>=k) break;
                count++;
                i++;
            }
            lt++;
        }
        return count;
    }
};