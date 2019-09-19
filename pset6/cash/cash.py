from cs50 import get_float


# prompt the user for a non negative float
while True:
    change = get_float("Your amount ? ")

    if change >= 0:
        break

change = round(change * 100)

quarters = 0
total = 0
nickels = 0

remainder = change

if change >= 25:
    quarters = int(change / 25)
    remainder = int(change % 25)
    total += quarters

if remainder >= 10:
    dimes = int(remainder / 10)
    remainder = int(remainder % 10)
    total += dimes


if remainder >= 5:
    nickels = int(remainder / 5)
    remainder = int(remainder % 5)
    total += nickels

if remainder >= 0:
    pennies = int(remainder / 1)
    remainder = int(remainder % 1)
    total += pennies

print(total)
