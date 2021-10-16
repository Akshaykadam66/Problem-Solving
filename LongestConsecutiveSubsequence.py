 # https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1#

 #User function Template for python3
 
class Solution:
    
    # arr[] : the input array
    # N : size of the array arr[]
    
    #Function to return length of longest subsequence of consecutive integers.
    def findLongestConseqSubseq(self,arr, N):
        arr.sort()
        # print(arr)
        c=1
        m=1
        for i in range(N-1):
            if arr[i]+1==arr[i+1]:
                c+=1
            elif a[i]!=a[i+1] and c>m:
                m=c
                c=1
                # print(c)
        if c>m:
            return c
        return m
#{ 
#  Driver Code Starts
#Initial Template for Python 3

import atexit
import io
import sys

_INPUT_LINES = sys.stdin.read().splitlines()
input = iter(_INPUT_LINES).__next__
_OUTPUT_BUFFER = io.StringIO()
sys.stdout = _OUTPUT_BUFFER

@atexit.register

def write():
    sys.__stdout__.write(_OUTPUT_BUFFER.getvalue())

if __name__ == '__main__':
    t = int(input())
    for tt in range(t):
        n=int(input())
        a = list(map(int, input().strip().split()))
        print(Solution().findLongestConseqSubseq(a,n))
# } Driver Code Ends