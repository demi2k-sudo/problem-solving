def isPower2(x):
    return False if x==0 else (x&x-1==0)

print(isPower2(2)) # 010 and 001 == 0
print(isPower2(3)) # 011 and 010 != 0 
print(isPower2(0))