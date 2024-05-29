'''
Problem: Given a string, find the length of the longest substring
without repeating characters.

Approach: Use a sliding window to track the current substring 
without duplicates. Adjust the window size by moving the left 
and right pointers.
'''

def Solve(string):
    maxi = []
    window = []
    for i in string:
        window.append(i)
        # print(window,set(window))
        if len(set(window))!=len(window):
            window = window[1:]
        else:
            if len(window)>len(maxi):
                maxi = window + []
    return maxi

print(Solve("asfagfg4"))