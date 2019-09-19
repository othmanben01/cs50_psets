from cs50 import get_int
import numbers

# as long as the input is invalid, repromt the user
while True:

    # promt the user for height of the pyramid
    print("Please, give me height of the pyramid between 0 and 23: ", end="")
    height = get_int()

    if height >= 0 and height <= 23:
        break

######################################
#####Pyramid Construction#############
hashes = 2
spaces = height - 1
# print out the rows of the pyramid
for j in range(height):

    # print out spaces of the pyramid
    print(spaces * " ", end="")
    spaces -= 1

    # print out hashes
    print(hashes * "#", end="")
    hashes += 1

    # new line
    print()
