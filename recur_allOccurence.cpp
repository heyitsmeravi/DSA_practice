#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        vector<int> lastOccurence(vector<int>arr,int idx,int target){
            if (idx==arr.size()){
                vector<int>result;
                return result;
            }
            if (arr[idx]==target){
                lastOccurence(arr,idx,target);
            }
        }

};

int main(){
    Solution obj;
    vector<int>arr={6,33,12,23,12,14,6,12,89,12,6,34};
    int target=12;
    return 0;
}