#User function Template for python3
import sys
class Solution:
    def sumClosest(self, arr, x):
        i=0
        j=len(arr)-1
        min_diff=sys.maxsize
        l=[None]*2
        while i<j:
            s=arr[i]+arr[j]
            if abs(s-x)<min_diff:
               min_diff=abs(s-x)
               l[0],l[1]=arr[i],arr[j]
            elif abs(s-x)==0:
                return l
            if s>x:
                j-=1
            elif s<x:
                i+=1
        return l
               
           


#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n, x = list(map(int, input().strip().split()))
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob.sumClosest(arr, x)
        print(str(ans[0]) + " " + str(ans[1]))
        tc -= 1
# } Driver Code Ends