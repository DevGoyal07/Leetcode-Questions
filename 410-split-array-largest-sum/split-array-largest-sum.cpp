#include<iostream>
#include<cmath>
using namespace std;


int count_k(vector<int>& arr, int mid){
    int k=1;
    int nums=0;
    for(int i=0;i<arr.size();i++){
        if(nums+arr[i]<=mid){
            nums+=arr[i];
        }
        else{
            k++;
            nums=arr[i];
        }
    }
    return k;
}



class Solution {
public:
    int splitArray(vector<int>& nums, int k) {

        int low=*max_element(nums.begin(), nums.end());
        int high=accumulate(nums.begin(), nums.end(), 0);

        while(low<=high){
            int mid=low+(high-low)/2;
            int ks=count_k(nums, mid);

            if(ks>k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
        
    }
};