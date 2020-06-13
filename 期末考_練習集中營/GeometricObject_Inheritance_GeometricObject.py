class GeometricObject():
    def __init__(self, color, filled):
        self.__color = color
        self.__filled = filled
    
    def setColor(self, color):
        self.__color = color
    def setFilled(self, filled):
        self.__filled = filled
    
    def getColor(self):
        return self.__color
    def isFilled(self):
        return self.__filled
    
    def __str__(self):
        return str("color: %s and filled: %s"%(self.__color, self.__filled))