from Date import Date

class Student:
    def __init__(self, name, month, day , year , score):
        self.__name = name
        self.__date = Date(month, day, year)
        self.__score = score

    def setName(self, name):
       self.__name = name
    def setDate(self, mon, day, year):
        self.__date.setMonth(mon)
        self.__date.setDay(day)
        self.__date.setYear(year)
    def setScore():
        self.__score = score

    def getName(self):
        return self.__name
    def getDate(self):
      return self.__date
    def getScore(self):
        return self.__score
    def toString(self):
        print(self.__name, self.__date.toString(), self.__score )