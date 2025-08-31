from unittest import case


a = int(input())
for b in range(a):
    instructions = input().split(' ')
    x0 = int(instructions[0])
    y0 = int(instructions[1])
    startside0 = instructions[2]
    directions = instructions[3]
    numdirections = len(directions)
    characters = list(directions)
    for i in range(numdirections):
        if characters[i] == 'L':
            match startside0:
                case 'N':
                    startside0 = 'W'
                case 'W':
                    startside0 = 'S'
                case 'S':
                    startside0 = 'E'
                case 'E':
                    startside0 = 'N'
        elif characters[i] == 'R':
            match startside0:
                case 'N':
                    startside0 = 'E'
                case 'E':
                    startside0 = 'S'
                case 'S':
                    startside0 = 'W'
                case 'W':
                    startside0 = 'N'
        elif characters[i] == 'A':
            match startside0:
                case 'N':
                    y0 += 1
                case 'E':
                    x0 += 1
                case 'S':
                    y0 -= 1
                case 'W':
                    x0 -= 1
    print(x0, y0, startside0)