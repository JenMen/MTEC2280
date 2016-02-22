
import sys

import random

answer = random.randint(0,100)

print(len(sys.argv))

if(len(sys.argv))
	
if (len(sys.argv) > 1):
	if (sys.argv[1]) == "answer"): 
guess = input(" Guess a number from 0 - 99: ")

if(answer == int(guess)):
	print(" You Won ")
else:
	print(" You Lost ")

print(guess)
print("The answer was: ")
print(answer)