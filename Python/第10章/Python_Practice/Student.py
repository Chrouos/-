from Date import Date

class Student:
    def __init__(self, name = "DiuDiu", date = Date, score = 100):
        self.__name = name
        self.__date = date
        self.__score = score
    
    def setName(self, name):
        self.__name = name
    def setDate(self, date):
        self.__date = date
    def setScore(self, score):
        self.__score = score

    def getName(self):
        return self.__name
    def getDate(self):
        return self.__date
    def getScore(self):
        return self.__date.toString()

    def toString(self):
        return str("{} {} {}".format(self.__name, self.__date.toString(), self.__score))