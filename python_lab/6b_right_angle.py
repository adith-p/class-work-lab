print("enter the sides a,b,c respectivly")

sides = []
for i in range(3):
    sides.append(float(input()))

sides.sort()
if sides[2]**2 == sides[1]**2 + sides[0]**2:
    print("The triangle is right angle")
else:
    print("The trinagle is not right angle")
