#include <stdio.h>
#include <vector.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        for (int val : nums){
            int freq = 0;
            for(int key : nums){
            if(val == key){
                freq++;
            }
        }
        if(freq >= n/2){
            return val;
        }
        }
        return 0;
    };
