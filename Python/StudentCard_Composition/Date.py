class Date:
    def __init__(self, month=1, day=1, year=2000):
        self.__month = month
        self.__day = day
        self.__year = year

    def setMonth(self, month):
        self.__month = month
    def setDay(self, day):
        self.__day = day
    def setYear(self, year):
        self.__year = year

    def getMonth(self):
        return self.__month
    def getDay(self):
        return self.__day
    def getYear(self):
        return self.__year

    def toString(self):
       return str("{}\{}\{}".format(self.__month, self.__day, self.__year))