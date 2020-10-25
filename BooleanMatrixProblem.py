t = int(input("Enter no of test cases\n"))
n = int(input("Enter no of rows\n"))
m = int(input("Enter no of columns\n"))
mat = []
temp = []
for i in range(n):
	print("Enter row %d \n" % (i+1))
	l = list(map(int,input().split()))
	mat.append(l)
	temp.append(l.copy())

for i in range(n):
	for j in range(m):
		if temp[i][j] == 1:
			for k in range(m):
				mat[i][k] = 1
			for k in range(n):
				mat[k][j] = 1
print("temp matrix\n")
print(temp)
print("original matrix")
print(mat)
print("Output\n")
for i in range(n):
	for j in range(m):
		print(mat[i][j] ,end=' ')
	print('\n')


