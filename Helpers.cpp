#include <algorithm>

// works for both positive and negative numebrs
string binaryToString(int n){
    string ans;
    for (int i = 0; i < 32 ; i++){
        ans.push_back(n&1 ? '1' : '0');
        n = n >> 1;
        if (n == 0) break; // remove this if you want prefixed with 0s as a 32 bit string, for positive numbers.
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

int reverseBits(int n){
    int ans = 0;

    for (int i = 0; i < 32; i++){
        ans = ans << 1; // left shift the bits of answer by 1
        ans = ans | (n & 1); // set the right most bit i.e. least significant bit if it's set in n
        n = n >> 1; // right shift the bits of n by 1 i.e. drop the LSB.
    }

    return ans;
}
