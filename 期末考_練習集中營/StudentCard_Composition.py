from StudentCard_Composition_Date import Date
from StudentCard_Composition_Student import Student

name = str(input())
mon = int(input())
day = int(input())
year = int(input())

s1 = Student("John", Date(6, 1, 1999), 90) 
s2 = Student("Marry", Date(10, 8, 1997), 80)

s1.setName(name)
s2.setDate(Date(mon, day, year))

print(s1.toString())
print(s2.toString())