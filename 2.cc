class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
            sort(nums.begin(),nums.end());
            int N = nums.size();
            vector<vector<int>> res;
            for(int i = 0 ; i<N-2 ; ++i)
            {
                if(nums[i]>0) break;
                if(i>0 && nums[i] == nums[i-1]) continue;
                int L = i+1;
                int R = N-1;
                while(L<R)
                {
                    int s = nums[i] + nums[L] + nums[R];
                    if(s > 0){
                        --R;
                    }else if(s < 0){
                        ++L;
                    }else{
                        res.push_back({nums[i],nums[L],nums[R]});
                        while( L < R && nums[L] == nums[++L]);
                        while( L < R && nums[R] == nums[--R]);
                    }
                }
            }
            return res;
    }
};