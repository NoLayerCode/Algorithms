def isValid(s: str) -> bool:
    stack = []
    mapParan = {")" : "(", "}": "{", "]": "["}
    for i in s:
        if i in mapParan:
            if stack and stack[-1] == mapParan[i]:
                stack.pop()
            else:
                return False
        else:
            stack.append(i)
    return True if not stack else False

print(isValid('(([]}'))