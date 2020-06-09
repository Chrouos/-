from Rectangle import Rectangle

rectArray = []

for i in range(3):
    width = int(input())
    height = int(input())
    rectArray.append(Rectangle(width, height))

for i in range(3):
    print(rectArray[i].getWidth(), rectArray[i].getHeight(), rectArray[i].getArea())

print(rectArray[1].getNumOfRect(), "Rectangles")