def intToList(n: int):
    if n == 0:
        return [0]
    res = []
    while n > 0:
        res.append(n % 10)
        n //= 10
    return res[::-1]

print(intToList(1234))  # [1, 2, 3, 4]
print(intToList(0))     # [0]