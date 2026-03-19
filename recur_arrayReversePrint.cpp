#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
    void arrayReversePrint(vector<int>&arr,int idx){
        if (idx==arr.size()){
            return ;
        }
        arrayReversePrint(arr,idx+1);
        cout<<arr[idx]<<endl;
    }
};

int main(){
    Solution obj;
    vector<int>arr={1,2,3,4,7,5,6};
    int idx=0;
    obj.arrayReversePrint(arr,idx);
    return 0;
}