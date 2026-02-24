
#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> leftproduct(n, 1);
     vector<int> rightproduct(n, 1);
    vector<int> ans(n);


    // Step 1: Prefix product
    for(int i = 1; i < n; i++) {
        leftproduct[i] = leftproduct[i - 1] * nums[i - 1];
    }

    // Step 2: Suffix product
    int suffix = 1;
    for(int i = n - 2; i >= 0; i--) {
        rightproduct[i] = rightproduct[i+1] *nums[i+1] ;
     
    }
    for(int i=0;i<n;i++){
        ans[i]=leftproduct[i]*rightproduct[i];
    }

    return ans;
}

int main() {
    vector<int> nums = {1,2,3,4};
    vector<int> result = productExceptSelf(nums);

    for(int x : result)
        cout << x << " ";
}