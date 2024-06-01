def generateParenthesis( n: int):
    def dfs(l,r,string):
        if l+r == n*2:
            answers.append(string)
        if l<n:
            dfs(l+1,r,string+'(')
        if r<l:
            dfs(l,r+1,string+')')
    answers = []
    dfs(0,0,'')
    return answers

#test cases
print(generateParenthesis(2))
print(generateParenthesis(1))
print(generateParenthesis(4))
print(generateParenthesis(3))
