# https://practice.geeksforgeeks.org/problems/minimum-platforms-1587115620/1#
#User function Template for python3

class Solution:    
    #Function to find the minimum number of platforms required at the
    #railway station such that no train waits.
    def minimumPlatform(self,n,arr,dep):
        # arr.sort()
        # dep.sort()
        i=0
        j=0
        max_plat=0
        needed_plat=0
        while i<n:
            if arr[i]<dep[j]:
                max_plat+=1
                i+=1
            elif dep[j]<arr[i]:
                max_plat-=1
                j+=1
            if max_plat>needed_plat:
                needed_plat=max_plat
        return needed_plat
             
         
         
         
         
         
#{ 
#  Driver Code Starts
#Initial Template for Python 3
import atexit
import io
import sys

#Contributed by : Nagendra Jha


if __name__ == '__main__':
    test_cases = int(input())
    for cases in range(test_cases) :
        n = int(input())
        arrival = list(map(int, input().strip().split()))
        departure = list(map(int, input().strip().split()))
        ob=Solution()
        print(ob.minimumPlatform(n,arrival,departure))
# } Driver Code Ends