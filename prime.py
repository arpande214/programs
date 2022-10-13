def prime_check():
    for j in range(1,100):
        num = j
        check = 1
        for i in range(1,num):
            if(num%i==0 and i!=1):
                check = 0
                break
        if(check and num != 1):
            print(f"{num} a prime number")
        else:
            print(f"{num} not a prime number")


prime_check()    