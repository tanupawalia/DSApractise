class Solution {
public:
    int mySqrt(int n) {
       long long int i=1;
        while(i*i<n)
        {
            i++;
        }
        if(i*i==n)
             return i;
        else
            return i-1;
    }
};
© 2022 GitHub, Inc.