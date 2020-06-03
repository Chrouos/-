from GeometricObject import GeometricObject

class Rectangle(GeometricObject):
    def __init__(self, width, height, color, filled):
        self.__width = width
        self.__height = height
        self.setColor(color)
        self.setFilled(filled)
    
    def getWidth(self):
        return self.__width
    def setWidth(self, width):
        self.__width = width

    def getHeight(self):
        return self.__height
    def setHeight(self, height):
        self.__height = height

    def getArea(self):
        return self.__height * self.__width
    def getPerimeter(self):
        return 2*(self.__width + self.__height)