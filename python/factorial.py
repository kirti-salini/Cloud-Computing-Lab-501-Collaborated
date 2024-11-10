def factorial(x):
    if x == 1:
        return 1

    return x * factorial(x-1)

num = int(input("Enter a number to get factorial of : "))
print(factorial(num))