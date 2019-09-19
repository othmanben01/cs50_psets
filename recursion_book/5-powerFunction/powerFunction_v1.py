# This program helps you to calculate the sum of the digits of a number
# Decomposition: power_linear(b,n) = power_linear(b, n-1) * b
# base case: power_linear(b, 0) = 1

def power_linear(b, n):
    if n == 1:
        return b
    else:
        return power_linear(b, n-1) * b

def main():
    print(power_linear(2,3))


if __name__ == "__main__":
    main()