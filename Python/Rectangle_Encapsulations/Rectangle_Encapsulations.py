from Rectangle import Rectangle

width1 = int(input())
width2 = int(input())
length1 = int(input())
length2 = int(input())

# 先使用變數名稱，後使用變數型別
rect1 = Rectangle(width1, length1)
rect2 = Rectangle(width2, length2)

# NOTE: print下一行自動換行， 換行指令為"\n"
print(rect1.getArea(), " ", rect1.getPerimeter())
print(rect2.getArea(), " ", rect2.getPerimeter())

rect2.setLength(50)
rect2.setWidth(25)
print(rect2.getArea(), " ", rect2.getPerimeter())