from Date import Date
from Student import Student

s1 = Student("John", 6, 1, 1999, 90)
s2 = Student("Marry", 10, 8, 1997, 80)

name = str(input())
mon = int(input())
day = int(input())
year = int(input())

s1.setName(name)
s2.setDate(mon, day, year)

s1.toString()
s2.toString()