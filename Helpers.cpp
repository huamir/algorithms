string binaryToString(int n){
    string ans;
    for (int i = 0; i < 32 ; i++){
        ans.push_back(n&1 ? '1' : '0');
        n = n >> 1;
        if (n == 0) break;
    }

    reverse(ans.begin(), ans.end());

    return ans;
}
