n=int(input())
arr=list(map(int,input().split()))
for _ in range(n):
	arr[_]*=2
for _ in arr:
	print(_,end=" ")
print("\n")
