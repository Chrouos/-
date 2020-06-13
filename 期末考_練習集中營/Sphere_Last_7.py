from Shape_Last_7 import Shape

class Sphere(Shape):
    def __init__(self, radius, color):
        self.__radius = radius
        super().setColor(color) # 呼叫爸爸的 setColor
    
    def setRadius(self, radius):
        self.__radius = radius
    def getRadius(self):
        return self.__radius
    
    def __str__(self):
        return "Sphere"
    
    def getVolume(self):
        return 4 * 3.14159 * self.__radius**3 / 3