# This program helps you to calculate the sum of the digits of a number

# Example
# n: the number of elements in a list
# n       = [] with n elements                         Result:     compare (largest in [] n - 1 elements and a[n-1]
# n - 1   = [] with (n-1) elements                     Result:     largest in [] n-1 elements

# Decomposition: s(n) => s(n-1), a[n-1]
def largest_integer_array(A):
    if len(A) == 1:
        return A[len(A) - 1]
    else:
        s1 = largest_integer_array(A[0:len(A) - 1])
        if s1 > A[len(A) - 1]:
            return s1
        else:
            return A[len(A) - 1]


def main():
    print(largest_integer_array([200,1,2,3,50,28,40,100]))




if __name__ == "__main__":
    main()

