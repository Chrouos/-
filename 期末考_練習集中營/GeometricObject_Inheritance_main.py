from GeometricObject_Inheritance_Circle import Circle
from GeometricObject_Inheritance_Rectangle import Rectangle
from GeometricObject_Inheritance_GeometricObject import GeometricObject

cirRadius = float(input())
rectWidth = float(input())
retHeight = float(input())
cirColor = str(input())
cirFilled = bool(input())
rectColor = str(input())
rectFilled = bool(input())

cir = Circle(cirRadius, cirColor, cirFilled)
rect = Rectangle(retHeight, rectWidth, rectColor, rectFilled)

print("Circle:")
print("Radius is %d\nDiameter is %d"%(cir.getRadius(), cir.getDiameter()))
print("Area is", cir.getArea())
print("Perimeter is", cir.getPerimeter())
print(cir)

print()

print("Rectangle:")
print("Width is %d\nHeight is %d"%(rect.getWidth(), rect.getHeight()))
print("Area is %d"%rect.getArea())
print("Perimeter is %d"%rect.getPerimeter())
print(rect)
