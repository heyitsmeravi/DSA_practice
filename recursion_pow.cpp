#include<iostream>
using namespace std;
class Solution {
    public:
        long long powerOfN(int x,int n){
            if (n==0){
                return 1;
            }
            //exponentation method T(log n)
            long long xpnb2=powerOfN(x,n/2);
            long long xpn=xpnb2*xpnb2;
            if (n%2==1){
                xpn=xpn*x;
            }
            return xpn;
            //normal method T(n)
            // return x*powerOfN(x,n-1);
        }
};
int main(){
    Solution obj;
    int x,n;
    cout<<"Enter the number and power:"<<endl;
    cin>>x>>n;
    long long output=obj.powerOfN(x,n);
    cout<<"The output is : "<<output<<endl;
    return 0;
}
