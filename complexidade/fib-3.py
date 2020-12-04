def fib(n):
    if(n <= 1):
        return 1
    f = 1 
    f_ant = 1
    for i in range(2, n+1):
        novo_f = f + f_ant
        f_ant = f
        f = novo_f 
    return f

n = int(input())
print(fib(n))

