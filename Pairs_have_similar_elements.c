similarity = 0
dict = {}
n = int(input())
mylist = list(map(int, input().split()))
for j in range(0,n):
    for k in range(j+1,n):
        if mylist[j] == mylist[k]+1:
            similarity+=1
            if dict.get(j) != None:
                similarity+=1
            if dict.get(k) != None:
                similarity+=1
            dict.update({j:k})
            dict.update({k:j})
        if mylist[j]+1 == mylist[k]:
            similarity+=1
            if dict.get(j) != None:
                similarity+=1
            if dict.get(k) != None:
                similarity+=1
            dict.update({j:k})
            dict.update({k:j})
print(similarity)
