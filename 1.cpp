#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
     vector<int> twoSum(vector<int>& nums, int target) {
          int size=nums.size();
          for(int i=0; i<size; i++){
                    for(int j=i+1; j<size ; j++){
                              if( nums[i]+nums[j]=target){
                                        return{i,j};
                              }
                    }
          }
               
                }
          
};
int main(){
    Solution s ;
    vector<int> v;
     v={1,6,3,2,5};
     vector<int> result= s.twoSum (v, 11);
     for(int i: result)
     {
          cout<<i<<endl;
     }
     return 0;

}