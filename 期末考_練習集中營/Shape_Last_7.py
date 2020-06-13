class Shape():
    def __init__(self, color):
        self.__color = color
    
    def setColor(self, color):
        self.__color = color
    def getColor(self):
        return self.__color
    
    def __str__(self):
        return "Shape"