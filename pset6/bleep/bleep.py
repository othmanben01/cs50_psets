from cs50 import get_string
from sys import argv


def main():
    # input
    # check point
    if not len(argv) == 2:
        print("Error!")
        exit(1)

    words = set()
    result = ""

    # load the banned text file
    load(words, argv[1])
    # print the user for input
    print("What message would you like to censor?")
    message = get_string().split(" ")

    # check if the user input could be completely considered
    result = check(words, message)
    #  print out the message
    print(tostring(result))

    return 0


def check(words, message):
    result = []
    for s in message:
        if not s.lower() in words:
            result.extend(s + " ")
        else:
            result.extend("*"*len(s) + " ")
    result.pop()
    return result


def load(words, dictionary):
    infile = open(dictionary, "r")
    for line in infile:
        words.add(line.rstrip("\n"))
    infile.close()
    return True


def tostring(lst):
    temp = ""
    for x in lst:
        temp += x
    return temp


if __name__ == "__main__":
    main()
