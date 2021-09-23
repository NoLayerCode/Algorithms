def romanToInt(s: str) -> int:
    symbol = {"I": 1,  "V": 5, "X": 10, "L": 50, "C": 100, "D": 500, "M": 1000}
    result = 0
    for i in range(len(s)):
        if i+1 < len(s) and symbol[s[i]] < symbol[s[i+1]]:
            result -= symbol[s[i]]
        else:
            result += symbol[s[i]]
    return result


print(romanToInt("III"))
