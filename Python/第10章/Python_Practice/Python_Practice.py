from Student import Student
from Date import Date

s1 = Student("John", Date(6, 1, 1999), 90)
s2 = Student("Marry", Date(10, 8, 1997), 80)

name = str(input())
mon = int(input())
day = int(input())
year = int(input())

s1.setName(name)
s2.setDate(Date(mon,day,year))

print(s1.toString())
print(s2.toString())