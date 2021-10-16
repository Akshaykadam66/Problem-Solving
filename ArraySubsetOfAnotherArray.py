# https://practice.geeksforgeeks.org/problems/array-subset-of-another-array2317/1#
#User function Template for python3

def isSubset( a1, a2, n, m):
    d={}
    for i in a1:
        if i not in d:
            d.update({i:1})
        else:
            d[i]+=1
    for j in range(m):
        if a2[j] not in d or d[a2[j]]==0:
            return "No"
        else:
            if d[a2[j]]==1:
                d.pop(a2[j])
            else:
                d[i]-=1
    # print(d)        
    return "Yes"
    
    
    


#{ 
#  Driver Code Starts
#Initial Template for Python 3


def main():

    T = int(input())

    while(T > 0):
        sz = [int(x) for x in input().strip().split()]
        n, m = sz[0], sz[1]
        a1 = [int(x) for x in input().strip().split()]
        a2 = [int(x) for x in input().strip().split()]
        
        print(isSubset( a1, a2, n, m))

        T -= 1


if __name__ == "__main__":
    main()

# } Driver Code Ends