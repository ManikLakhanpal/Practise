print("1 --> SUM\n2 --> SUB\n3 --> MUL\n4 --> DIV\n5 --> REM\n6 --> END")
option = 0

while option != 6:

    option = int(input("Enter option : "))

    if option == 6:
        print("Bye.\n")
        break

    num1 = int(input("Enter num1 : "))
    num2 = int(input("Enter num2 : "))

    if option == 1:
        print(f"{num1} + {num2} = {num1 + num2}\n")

    elif option == 2:
        print(f"{num1} - {num2} = {num1 - num2}\n")
    
    elif option == 3:
        print(f"{num1} * {num2} = {num1 * num2}\n")
    
    elif option == 4:
        print(f"{num1} / {num2} = {num1 / num2}\n")
    
    elif option == 5:
        print(f"{num1} % {num2} = {num1 % num2}\n")
