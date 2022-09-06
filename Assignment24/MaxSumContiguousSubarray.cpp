int Solution::maxSubArray(const vector<int> &A) {
    int prefixsum=0,maxsum=INT_MIN;
    for(int i=0;i<A.size();i++){
        prefixsum+=A[i];
        if(prefixsum>maxsum)
        maxsum=prefixsum;
        if(prefixsum<0)
        prefixsum=0;
    }
    return maxsum;
}
