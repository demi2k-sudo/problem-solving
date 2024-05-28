'''
Given an array with n objects colored red, white or blue, sort them 
so that objects of the same color are adjacent, with the colors in the order red, white and blue.

Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.

Note: Using library sort function is not allowed.

Example:
Input: [0 1 2 0 1 2]
Modify array so that it becomes: [0 0 1 1 2 2]
'''

def solve(colors):
    st,end = 0,len(colors)-1
    i = 0
    while i<end:
        
        if colors[i]==0:
            colors[i],colors[st] = colors[st],colors[i]
            st+=1
            
        elif colors[i]==2:
            colors[i],colors[end] = colors[end],colors[i]
            end-=1
            continue
        i+=1
    return colors

print(solve([0,2,0,1,1,2,1,1,2]))