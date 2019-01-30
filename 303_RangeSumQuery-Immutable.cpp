class NumArray {
public:
    vector<int> hash_sum;
    NumArray(vector<int> nums) {
        for(int i = 1 ; i < nums.size() ; i++)
        {
            nums[i] += nums[i-1];
        }
        hash_sum = nums;
    }
    
    int sumRange(int i, int j) {        
        return hash_sum[j] - hash_sum[i-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */
