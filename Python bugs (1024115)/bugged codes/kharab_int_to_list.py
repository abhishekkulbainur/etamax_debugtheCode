def intToList(n: int):
    res = []
    while n > 0:
        if n < 10:
            break              # BUG : premature loop exit (last digit lost)
        res.append(n % 10)
        n = n / 10             # BUG : float division → n becomes float
    return res                 # BUG : digits in reverse order

print(intToList(1234))
print(intToList(0))