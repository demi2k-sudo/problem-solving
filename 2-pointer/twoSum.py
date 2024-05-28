def Solve(Arr,k):
    
    start = 0
    end = len(Arr)-1
    count = 0
    
    while(start<end):
        if Arr[start]!=Arr[end]:
            if Arr[start]+Arr[end]>k:
                end-=1
            elif Arr[start]+Arr[end]<k:
                start+=1
            elif Arr[start]+Arr[end]==k:
                c1,c2 = 1,1
                i = start + 0
                while(Arr[i]==Arr[i+1]):
                    c1+=1
                    i+=1
                i = end + 0
                while(Arr[i]==Arr[i-1]):
                    c2+=1
                    i-=1
                count+=c1*c2
                start+=c1
                end-=c2
        else:
            count += end-start+1
            start += end-start+1

    return count

print(Solve([1,2,3,4,4,5,5,6,7,8],9))