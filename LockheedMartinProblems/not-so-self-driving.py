a = int(input())
for b in range(a):
    ar1 = input().split(':')
    speed = float(ar1[0])
    distance = float(ar1[1])
    if speed == 0:
        print("SAFE")
    else:
        time = distance / speed
        if time <= 1:
            print("SWERVE")
        elif time <= 5:
            print("BRAKE")
        else:
            print("SAFE")