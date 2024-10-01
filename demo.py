T=int(input())
result=[]

for i in range(T):
    a=[]
    arr=map(int,input().split())
    arr=list(arr)
    N=arr[0]
    K=arr[1]
    arr2=map(int,input().split())
    arr2=list(arr2)
    for j in arr2:
        if j<=K:
            a.append(1)
            K=K-j
        else:
            a.append(0)
            
        
    result.append(a)
for i in result:
    for k in i:
        print(k)
    print()

