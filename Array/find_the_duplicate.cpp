class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // sort(nums.begin(),nums.end()); 
        // for(int i =0;i<nums.size()-1;i++){
        //    if(nums[i+1]==nums[i]){
        //     return nums[i];
        //    }
        // } 
        // return -1; 

        // ++Negative Marking method 

        //  int ans = -1;
        // for(int i =0 ;i<nums.size();i++){ 

        //     int index = abs(nums[i]);
        //     if(nums[index] > 0){
        //         nums[index] = -nums[index];
        //     } 
        //     else{
        //         ans = index; 
        //         break;
        //     }
        // } 
        // return ans;  

        //++ Positioning method 
        while(nums[0] != nums[nums[0]]){
            swap(nums[0],nums[nums[0]]); 
        } 

        return nums[0];

    }
};
