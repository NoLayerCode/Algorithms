import math

# def isPalindrome( x: int) -> bool:
#     MIN = -2147483648
#     MAX = 2147483647 

#     if x < 0:
#         return False
#     else:
#         res = 0
#         temp = x
#         while x:
#             digit = int(math.fmod(x, 10))   
#             x = int(x / 10)                 

#             if (res > MAX // 10 or 
#                 (res == MAX // 10 and digit >= MAX % 10)):
#                 return False
#             res = (res * 10) + digit
#         if res == temp :
#             return True
#         else :
#             return False

def isPalindrome( x: int) -> bool:

    if x< 0:
        return False
    else:
        MAX = 2147483647 
        stack = []

        while x:
            digit = int(math.fmod(x, 10))   
            x = int(x / 10)
            if len(stack) == 0:



print(isPalindrome(21434843412))