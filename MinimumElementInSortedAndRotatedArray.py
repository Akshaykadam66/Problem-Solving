# https://practice.geeksforgeeks.org/problems/minimum-element-in-a-sorted-and-rotated-array3611/1
#User function Template for python3

class Solution:
    def findMin(self, arr, n):
        l,h=0,n-1
        while l<h:
            m=(l+h)//2
            if arr[m]>arr[m-1]:
                l=m+1
            elif arr[m]<arr[m-1]:
                return arr[m]

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = [int(x) for x in input().split()]
        ob = Solution()
        print(ob.findMin(arr, n))
# } Driver Code Ends