import random
print("Welcome to Rock, Paper & Scissor game....")
n = int(input("Press 0 for 'Rock' 1 for 'Paper' & 2 for 'Scissor': "))
if n==0:
    k1 = random.randint(1,2)
    if k1==1:
        print("Computer chose paper\nComputer won")
    else:
        print("Computer chose scissor\nComputer lost")
elif n==1:
    k2_list = [0,2]
    index = random.randint(0,1)
    if k2_list[index]==0:
        print("Computer chose rock\nComputer lost")
    else:
        print("Computer chose scissor\nComputer won")
elif n==2:
    k2 = random.randint(0,1)
    if k2==0:
        print("Computer chose rock\nComputer won")
    else:
        print("Computer chose paper\nComputer lost")
else:
    print("Please enter correct input.")