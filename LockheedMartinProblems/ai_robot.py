a = int(input())
for b in range(a):
    instructions = input().split(' ')
    x0 = int(instructions[0])
    y0 = int(instructions[1])
    side = instructions[2]
    directions = instructions[3]
    numdirections = len(directions)
    characters = list(directions)
    for i in range(numdirections):
        if characters[i] == 'L':
            left_turn = {'N': 'W', 'W': 'S', 'S': 'E', 'E': 'N'}
            side = left_turn[side]
        elif characters[i] == 'R':
            right_turn = {'N': 'E', 'E': 'S', 'S': 'W', 'W': 'N'}
            side = right_turn[side]
        elif characters[i] == 'A':
            advance = {'N': (0, 1), 'E': (1, 0), 'S': (0, -1), 'W': (-1, 0)}
            dx, dy = advance[side]
            x0 += dx
            y0 += dy
    print(x0, y0, side)