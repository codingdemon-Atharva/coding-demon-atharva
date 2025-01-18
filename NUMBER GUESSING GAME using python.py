# NUMBER GUESSINg  Game
import random

def guess_the_number():
    print("Welcome to 'Guess the Number' Game!")
    print("I have selected a number between 1 and 100. Can you guess it?")
    
    '''
     Generate a random number between 1 and 100
     '''
    numberguess = random.randint(1, 100)
    attempts = 0
    
    while True:
        try:
            # Ask the user for their guess
             
            guess = int(input("Enter your guess: "))
            attempts += 1
            
            if guess < numberguess:
                print("Too low! Try again.")
            elif guess > numberguess:
                print("Too high! Try again.")
            else:
                print(f"Congratulations! You guessed the number {numberguess} in {attempts} attempts.")
                break
        except ValueError:
            print("Invalid input! Please enter a valid number.")

guess_the_number()
