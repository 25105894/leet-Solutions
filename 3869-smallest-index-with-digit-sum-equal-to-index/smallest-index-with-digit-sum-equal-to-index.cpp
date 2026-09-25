class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int count_index = -1;
        int count_num = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++)
        {
            count_num = nums[i];
            count_index++;

            int sum = 0;
            int temp = count_num;

            while(temp > 0)
            {
                sum = sum + (temp % 10);
                temp = temp / 10;
            }

            if(sum == count_index)
            {
                return count_index;
            }
        }

        return -1;
    }
};