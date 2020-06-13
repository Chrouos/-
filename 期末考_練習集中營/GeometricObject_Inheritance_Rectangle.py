from GeometricObject_Inheritance_GeometricObject import GeometricObject

class Rectangle(GeometricObject):
    def __init__(self, height, width, color, filled):
        self.__height = height 
        self.__width = width
        super().setColor(color)
        super().setFilled(filled)
    
    def setHeight(self, height):
        self.__height = height
    def setWidth(self, width):
        self.__width = width
        
    def getHeight(self):
        return self.__height
    def getWidth(self):
        return self.__width
    
    def getArea(self):
        return self.__height * self.__width
    def getPerimeter(self):
        return (self.__height + self.__width)*2