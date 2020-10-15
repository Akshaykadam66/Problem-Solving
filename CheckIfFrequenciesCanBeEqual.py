def sameFreq(s):
        # code here
        flag=0
        l = list(s)
        d={}
        for i in l:
            if i in d:
                d[i]+=1
            else:
                d.update({i:1})
        v = list(d.values())
        print(v,end='\n')
        for i in range(0,len(v)-1):
            if abs(v[i]-v[i+1])!=0 and abs(v[i]-v[i+1])!=1:
                flag=1
                break
        if flag==1:
            print('Not possible!')
        else:
            print('Possible!')

sameFreq(input('Enter string\n'))