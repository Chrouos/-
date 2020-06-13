class Body():
    def __init__(self, height, weight):
        self.__height = height
        self.__weight = weight
    
    def setHeight(self, height):
        self.__height = height
    def setWeight(self, weight):
        self.__weight = weight
    
    def getHeight(self):
        self.__height
    def getWeight(self):
        self.__weight
        
    def toString(self):
        bmi = self.__weight / self.__height**2
        return str(round(bmi, 2))