'''
Problem: Given an array of integers and a number K, 
find the maximum sum of a subarray of size K.

Approach: Use a sliding window of size K to keep track 
of the sum of elements inside the window and slide it 
from the start to the end of the array.
'''

def Solve(array,k):
    window = []
    maxi = -9999999
    for i in array:
        if len(window)==k:
            window = window[1:]
        window.append(i)
        print(window)
        if sum(window)>maxi:
            
            maxi = sum(window)
    return maxi

print(Solve([2,8,4,2,3],3))
        