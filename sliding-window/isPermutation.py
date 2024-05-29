'''
Problem: Given two strings s1 and s2, write a function 
to return true if s2 is a permutation of s1.

'''

def Solve(s1,s2):
    s1_charcount = {}
    s2_charcount = {}
    
    for i in s1:
        if i not in s1_charcount:
            s1_charcount[i]=1
        else:
            s1_charcount[i]+=1
    for i in s2:
        if i not in s2_charcount:
            s2_charcount[i]=1
        else:
            s2_charcount[i]+=1
    return s1_charcount==s2_charcount

print(Solve("asasas","sasasa"))
print(Solve("asasas","sasaa"))
print(Solve("madoni","damion"))