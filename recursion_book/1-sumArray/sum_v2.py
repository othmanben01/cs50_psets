# This program helps you to calculate the sum of the elements of a list

# Decomposition: s(a) => s(a[0:n-1]), a[n-1]
def sum_list_length_1(A, lower, upper):
    if lower > upper:
        return 0
    else:
        return sum_list_length_1(A, lower, upper-1) + A[upper]

# Decomposition: s(a) => a[0], s(a[1:n])
def sum_list_length_2(A, lower, upper):
    if lower > upper:
        return 0
    else:
        return A[lower] + sum_list_length_2(A, lower + 1, upper)

# Decomposition: s(a) => s(a[0:n//2]), s(a[n//2:n])
def sum_list_length_3(A, lower, upper):
    if lower > upper:
        return 0
    elif lower == upper:
        return A[lower]
    else:
        mid = (lower + upper) // 2
        return sum_list_length_3(A, lower, mid) + sum_list_length_3(A, mid + 1, upper)


def main():
    print(sum_list_length_1([1,2,3,4,5], 0, 4))
    print(sum_list_length_2([1,2,3,4,5], 0, 4))
    print(sum_list_length_3([1,2,3,4,5], 0, 4))




if __name__ == "__main__":
    main()

