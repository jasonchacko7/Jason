a = int(input())
for b in range(a):
    ar1 = input().split()
    turkeys = int(ar1[0])
    goats = int(ar1[1])
    horses = int(ar1[2])
    #print(f"There are {turkeys} turkeys, {goats} goats, and {horses} horses.")
    total_legs = (turkeys * 2) + (goats * 4) + (horses * 4)
    print(total_legs)