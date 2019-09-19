# This program helps you to calculate the sum of the elements of a list


def sum_list_length_1(A):
    if len(A) == 0:
        return 0
    else:
        return sum_list_length_1(A[0:len(A) - 1]) + A[len(A) - 1]

def sum_list_length_2(A):
    if len(A) == 0:
        return 0
    else:
        return A[0] + sum_list_length_2(A[1:len(A)])

def sum_list_length_3(A):
    if len(A) == 0:
        return 0
    elif len(A) == 1:
        return A[0]
    else:
        mid = len(A) // 2
        return sum_list_length_3(A[0 : mid]) + sum_list_length_3(A[mid : len(A)])


def main():
    print(sum_list_length_1([1,2,3,4,5]))
    print(sum_list_length_2([1,2,3,4,5]))
    print(sum_list_length_3([1,2,3,4,5]))




if __name__ == "__main__":
    main()

