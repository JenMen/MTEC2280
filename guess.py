import sys

filename = sys.argv[0]

guess = sys.argv[1]
answer = 200

#print(filename)

#Check the type
print(type(guess))

#converted the string from terminal into a integer
intGuess = int(guess)

#If statement is true then you wint
if(intGuess == answer):
	print("You are correct, YAY!!!!")
if(intGuess!= answer):
	print("Sorry you lost...")