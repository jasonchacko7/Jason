import math

a = int(input())
for b in range(a):
    asteroids = {}
    num_asteroids = int(input())
    for asteroid in range(num_asteroids):
        x, y = map(int, input().split())
        distance = math.sqrt(x ** 2 + y ** 2)
        asteroids[distance] = (x, y)
    sorted_asteroids = dict(sorted(asteroids.items()))
    for key in sorted_asteroids:
        x1, y1 = sorted_asteroids[key]
        print(x1, y1)