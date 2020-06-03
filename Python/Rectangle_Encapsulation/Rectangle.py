class Rectangle:
    # Construct, def is func
    # private: length, width(__)
   def __init__(self, width=1 , length=1):
       self.__width = width
       self.__length = length
    
    # self 是呼叫自己 private 時必須的
    # setFunc, __length is private, __width is private
   def setLength(self, length):
        self.__length = length

   def setWidth(self, width):
        self.__width = width

    # getFunc
   def getLength(self):
       return self.__length
   def getWidth(self):
       return self.__width

    # Calculation
   def getArea(self):
        return self.__length * self.__width
   def getPerimeter(self):
       return 2 * (self.__width + self.__length)
