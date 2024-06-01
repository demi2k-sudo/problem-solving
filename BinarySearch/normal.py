def search(array,n):
    high = len(array)-1
    low = 0
    while(high>low):
        mid = high-low//2
        if(n>array[mid]):
            low = mid+1
        elif(n<array[mid]):
            high = mid-1
        else:
            return True
    return False

print(search([1,2,3,4,5,6,7,8],4))
print(search([1,2,3,4,5,6,7,8],0))
print(search([1,2,3,6,7,8],8))
print(search([1,2,3,6,7,8],4))