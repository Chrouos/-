
def isLeapYear(newYear):
    if(newYear%400==0 or newYear%100!=0 and newYear%4==0):
        return True
    else:
        return False

yearList = []
for i in range(0, 3):
    # 使用 append 加入 list 當中
     yearList.append(int(input()))
        
for i in range(0,3):
    # 放入def之前必須先轉成 int
    if( isLeapYear(yearList[i]) == True):
        #如果是用list 使用 %s
        print("The %s is leap year."%yearList[i])
    elif( isLeapYear(yearList[i]) == False):
        print("The %s isn't leap year."%yearList[i])

