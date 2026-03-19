#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        int firstOccurence(vector<int>&arr,int target,int idx){
            if (idx==arr.size()) return -1;
            if (arr[idx]==target){
                return idx;
            }else{
                return firstOccurence(arr,target,idx+1);
            }
        }
};
int main(){
    Solution obj;
    vector<int>arr={1,3,2,8,5};
    int target=9;
    int result=obj.firstOccurence(arr,target,0);
    if (result==-1) cout<<target<<" Not Found"<<endl;
    else cout<<target<<" is on index "<<result;
}