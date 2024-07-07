
'''
    3. Divide the given array into two arrays such that both arrays have equal averages
Sample input: [2 4 8 10 16]		Sample output: [8] and [2 4 10 16]
Sample input: [2 4 8 10]		Sample output: [4 8] and [2 10]
'''

arr = list(map(int, input().split()))
avg=0
avg2=0
sum2=sum=0
for i in range(len(arr)):
    sum+=arr[i]
avg=sum/len(arr)
arr2=[]
for i in range(len(arr)):
    arr2.append(arr[i])
    sum2+=arr[i]
    avg2=sum2/len(arr2)
    if (avg2>(avg/2)):
        break

print(arr2)
arr1 = [x for x in arr if x not in arr2]
print(arr1)