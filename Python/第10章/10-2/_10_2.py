from Rectangle import Rectangle
import numpy as no

# def 後面的參數，可以用 「 變數 = 型別 」 去定義
def sum(rectArray = Rectangle, size = int):
    sum = 0
    for i in range(4):
        sum += rectArray[i].getArea()

    return sum

# size 用不到，複製後我也沒 刪掉
def printRectangleArray(rectArray = Rectangle, size = int):
    for i in range(4):
        print(rectArray[i].getWidth(), rectArray[i].getHeight(), rectArray[i].getArea())


''' 以下是 main函式 '''

rectArray = []

for i in range(4):
    width = int(input())
    height = int(input())
    
    # 使用 append 不要使用 rectArray[i] , 這為 C++ 寫法
    rectArray.append(Rectangle(width, height))

printRectangleArray(rectArray, 0)
print("Total: %d"%sum(rectArray))