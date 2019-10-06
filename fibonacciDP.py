def fib(n):
  if a[n]!=-1:
    if n<2:
      a[n]=n
    else
      a[n]=fib(n-1)+fib(n-2)
  return(n)
  

n=int(input())
print(fib(n))
