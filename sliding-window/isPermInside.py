'''
Problem: Given two strings s1 and s2, write a function 
to return true if s2 contains the permutation of s1.

Approach: Use a sliding window to compare the character 
count of the current window in s2 with the character count of s1
'''

def checkInclusion(self, s1: str, s2: str) -> bool:
    s1_freq = {}
    for i in s1:
        if i in s1_freq:
            s1_freq[i] += 1
        else:
            s1_freq[i] = 1
    l = j = 0
    while(j<len(s2)):
        # print(s2[l:j+1])
        if(j-l+1<len(s1)):
            j+=1
        else:
            window = {}
            for i in s2[l:j+1]:
                if i in window:
                    window[i]+=1
                else:
                    window[i]=1
            if window == s1_freq:
                return True
            else:
                l+=1
                j+=1
    return False