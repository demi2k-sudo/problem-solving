'''
to minimize the expression 
max(a,b,c)-min(a,b,c) where a,b and c are elements taken from A,B and C respectively
A,B,C are all sorted arrays 
'''

def solve(A,B,C):
    print(A,B,C)
    i = 0
    j = 0
    k = 0
    mincost = 100000
    while(i<len(A) and j<len(B) and k<len(C)):
        # print(A[i],B[j],C[k])
        mini = min(A[i],B[j],C[k])
        maxi = max(A[i],B[j],C[k])
        cost = maxi-mini
        if cost<mincost:
            mincost = cost 
            # print(mincost)
        if mini==A[i]:
            i+=1
        elif mini==B[j]:
            j+=1
        elif mini==C[k]:
            k+=1
    return 0 if (mincost==100000) else mincost

print(solve([1,4,5,8,10],[6,9,15],[2,3,6,6]))
print(solve([1, 2, 3], [2, 3, 4], [1, 2, 3])) 
print(solve([1, 4, 5, 8, 10], [6, 9, 15], [2, 3, 6, 6])) 
print(solve([1, 5, 9], [2, 6, 10], [3, 7, 11])) 
print(solve([10, 20, 30], [15, 25, 35], [5, 25, 45])) 
print(solve([1, 2, 3, 4, 5], [10, 20, 30], [5, 6, 7, 8])) 
print(solve([1, 3, 15], [2, 10, 20], [10, 12, 14])) 
            