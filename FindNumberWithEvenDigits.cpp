#include <vector>
class Solution {
    int counter=0;
    bool FindEvenWithEvenDigits(int num){
        while(num>0)
        {
            num=num/10;
            counter++;
        }
        return counter%2==0;
    }
    public:
        int findNumbers(vector<int>& nums) {
            int CountDigits=0;
            for (int i=0;i<nums.size();i++)
            {
                if (FindEvenWithEvenDigits(nums[i]))
                {
                    CountDigits++;
                }
            }
            return CountDigits;
            
        }
    };