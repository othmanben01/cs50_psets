# This program helps you to calculate the sum of the digits of a number

# Example
# n       =    5342                     Result:     5+3+4+2 = 14
# n//10   =    534                      Result:     5+3+4   = 12            Diff: 12 + 2 => 12 + n%10

# Decomposition: s(n) => s(n//10), n % 10
def add_digits(n):
    if n < 10 and n >= 0:
        return n[]
    else:
        return add_digits(n//10) + (n % 10)

def main():
    print(add_digits(5342))


if __name__ == "__main__":
    main()

