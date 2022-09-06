int Solution::solve(vector<int> &A, int B) {
   int n=A.size();
   int left=0, right=n-1;
   int leftsum=0,rightsum=0,maxsum;
   
   while(right>=n-B){
       rightsum+=A[right];
       right--;
   } 
   maxsum=rightsum;
   right++;
   
   while(left<B){
       leftsum+=A[left++];
       rightsum-=A[right++];
       maxsum=max(maxsum,leftsum+rightsum);
   }
   return maxsum;
    
    
    
}
