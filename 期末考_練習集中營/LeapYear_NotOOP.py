def isLeapYear(newYear):
    if (newYear%400==0 or newYear%100!=0 and newYear%4==0):
        return True
    else:
        return False


yearList = []
for i in range(3):
    yearList.append(int(input()))
    
for i in range(3):
    if ( isLeapYear(yearList[i]) == True ):
        print("The %d is leap year."%yearList[i])
    else:
        print("The %d isn't leap year."%yearList[i])