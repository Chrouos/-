from GeometricObject import GeometricObject
from Circle import Circle
from Rectangle import Rectangle

circleRadius = int(input())
rectangleWidth = int(input())
rectangleHeight = int(input())
circleColor = str(input())
circleFilled = bool(input())
rectangleColor = str(input())
rectangleFilled = bool(input())

cir = Circle(circleRadius, circleColor, circleFilled)
rect = Rectangle(rectangleWidth, rectangleHeight, rectangleColor, rectangleFilled)

print("Circle:")
print("Radius is {0}\nDiameter is {1}\nArea is {2}\nPerimeter is {3}".format(cir.getRadius(),\
   cir.getDiameter(), cir.getArea(), cir.getPerimeter()))
#print("color: %s and filled: %s"%(cir.getColor(), cir.isFilled()))


print("\nRectangle:")
print("Width is {0}\nHeight is {1}\nArea is {2}\nPerimeter is {3}\ncolor: {4} and filled: {5}".format(\
    rect.getWidth(), rect.getHeight(), rect.getArea(), rect.getPerimeter(), rect.getColor(), rect.isFilled()))