# This program helps you to calculate the sum of the digits of a number

# Example
# n       =    5342                     Result:     print(5,3,4) + print(5)
# n//10   =    534                      Result:     print(5,3,4)                        Diff:

# Decomposition: s(n) => s(n//10), print(n%10)
def print_digits_vertically(n):
    if n < 10 and n >= 0:
        print(n)
    else:
        print_digits_vertically(n//10)
        print(n%10)


def print_digits_reversed_vertically(n):
    if n < 10 and n >= 0:
        print(n)
    else:
        print(n%10)
        print_digits_reversed_vertically(n//10)



def main():
    print_digits_vertically(5342)
    print()
    print_digits_reversed_vertically(5342)





if __name__ == "__main__":
    main()

