class Solution {
public:
int firstBadVersion(int n) {
int result=0;
int start=1,end=n;
while(start<=end)
{
int mid=start+(end-start)/2;
if(isBadVersion(mid)==true)
{
result=mid;
end=mid-1;
}
else if(isBadVersion(mid)==false)
start=mid+1;
}
return start;
}
};