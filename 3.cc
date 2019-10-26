class Solution{
public:
    vector<int> twoSum(vector<int> & nums, int target){
        unordered_map<int,int> record;
        for(int i = 0;i<nums.size();i ++){
            
            int tmp = target - nums[i];
            if(record.find(tmp) != record.end()){
                int res[] = {i , record[tmp]};
                break;
            }
            record[nums[i]] = i;
        }
        return vector<int>(res,res+2);
    }
}