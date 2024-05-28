'''
You have a row of walls with different heights. 
By connecting two walls, you can create a container to hold water, 
but only up to the level of the shorter bucket. What's the most water 
you can hold by strategically choosing which two walls to connect?
'''

def Solve(row):
    st,end = 0,len(row)-1
    maxi = 0
    while(st<end):
        area = min(row[st],row[end])*(end-st)
        if area>maxi:
            maxi = area
            print(f"{row[st]},{row[end]} * {end-st} = {maxi}")
        if min(row[st],row[end]) == row[st]:
            st+=1
        else:
            end-=1
    return maxi

print(Solve([1,2,8,7,6,5,6,3,2]))