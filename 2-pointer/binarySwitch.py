'''
You are given with an array of 1s and 0s. 
And you are given with an integer M, 
which signifies number of flips allowed.
Find the position of zeros which when flipped 
will produce maximum continuous series of 1s.

For this problem, return the indices of maximum continuous series of 1s in order.
'''

def solve(series,m):
    st,end = 0,0
    ans_st,ans_end = 0,0
    zeroes = 0
    while(end<len(series)):
        # Window expansion
        while(end<len(series) and zeroes<=m):
            # print(st,end)
            if series[end] == 0:
                zeroes+=1
            if zeroes<=m and (end-st)>(ans_end-ans_st):
                ans_st = st
                ans_end = end
                # print(ans_st,ans_end,'++')
            end+=1
        
        # Window contraction
        while(st<end and zeroes>m):
            # print(st,end,"--")
            if series[st]==0:
                zeroes-=1
            st+=1
    return [k for k in range(ans_st,ans_end+1)]

print(solve([1,1,0,1,1,0,0,1,1,1],1))
print(solve([1,1,0,1,1,0,0,1,1,1],2))
            