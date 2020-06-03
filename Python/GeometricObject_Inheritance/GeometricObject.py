class GeometricObject:
    def __init__(self, color, filled):
        self.__color = color
        self.__filled = filled
    
    def getColor(self):
        return self.__color
    def setColor(self, color):
        self.__color = color

    def isFilled(self):
        if(self.__filled == True):
            return True
        else:
            return False
    def setFilled(self, filled):
        self.__filled = filled

    def __str__(self):
        print("Color: &s and filled: &s"%(self.__color, self.__filled))


