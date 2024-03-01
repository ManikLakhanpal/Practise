number = int(input("Enter number : "))
answer = []

for i in range(number):
    if i <= 1:
        answer.append(1)
        continue
    answer.append(answer[-2] + answer[-1])

for i in range(len(answer)):
    print(f"{i+1})\t{answer[i]}")