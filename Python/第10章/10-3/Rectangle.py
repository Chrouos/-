class Rectangle:
    
    numOfRect = 0

    # 未完成 static 
    def __init__(self, width, height):
        self.__width = width
        self.__height = 

    '''
    def __new__(cls):
        cls.numOfRect+=1
    '''
        
    def setWidth(self, width):
        self.__width = width
    def getWidth(self):
        return self.__width
    def setHeight(self, height):
        self.__height = height
    def getHeight(self):
        return self.__height
    def getArea(self):
        return self.__height * self.__width

    @classmethod
    def getNumOfRect(cls):
        return cls.numOfRect
