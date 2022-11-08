#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {

    int sum = 0;
    for(int i = 0; i < nums.size(); i++){
        for(int j = 0; j < nums.size(); j++){

            if(nums[i] + nums[j] == target){
               vector<int> v = {i,j};
               return v;
            }
        }
    }

}

int main()

{
    vector<int> v = {2,7,11,15};
    int tergat;
    cout<< "Enter target number : ";
    cin>>tergat;

   vector<int> value = twoSum(v, tergat);
   for(auto i : value){
    cout<<i << " ";
   }

    return 0;
}
