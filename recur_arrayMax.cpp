#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
        int arrayMax(vector<int>&arr,int idx){
            if (arr.size()-1==idx){
                return arr[idx];
            }
            int mx=arrayMax(arr,idx+1);
            if (mx>arr[idx]) return mx;
            else return arr[idx];
        }
};
int main(){
    Solution obj;
    vector <int> arr={23,53,12,202,101,45};
    int mx=obj.arrayMax(arr,0);
    cout<<mx<<endl;
    return 0;
}