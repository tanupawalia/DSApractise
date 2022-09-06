vector<int> Solution::flip(string A) {
vector<int>ans;
bool flag=true;
int n=A.size();
vector<int>arr(n);
for(int i=0;i<n;i++){
    if(A[i]=='0')
    {
    arr[i]=1;
    flag=false;}
    else
    arr[i]=-1;
}   
if(flag)return ans;
int currsum=0;
int maxsum=0;
int l=0,r=0;
ans.resize(2);
for(int i=0;i<n;i++)
{
    currsum+=arr[i];
    if(currsum>maxsum)
    {
        maxsum=currsum;
        r=i;
        ans[0]=l+1;
        ans[1]=r+1;
    }
    if(currsum<0){
        currsum=0;
        l=i+1;
    }
} 
return ans;

}
