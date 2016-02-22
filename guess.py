import sys

num1 = sys.argv[0]

sign = sys.argv[1]

num2 = sys.argv[2]

#print(filename)

#Check the type
print(type(guess))

#converted the string from terminal into a integer
intGuess = int(guess)

if (sign == "+"):
	calc = int(num) + int(num2)
	print(calc)

if (sign == "-"):
	calc = int(num) - int(num2)
	print(calc)

if (sign == "*"):
	calc = int(num) * int(num2)
	print(calc)

if (sign == "/"):
	calc = int(num) / int(num2)
	print(calc)

print(calc)

#If statement is true then you wint
