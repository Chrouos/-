from Teacher_Last_6 import Teacher
from Body_Last_6 import Body

name = str(input()) #輸入名字
height = float(input()) #輸入身高
weight = float(input()) #輸入體重

teacher1 = Teacher("Candy", Body(1.7, 80), 88000) #建造 Teacher object
teacher2 = Teacher("Linda", Body(1.6, 90), 61000)

teacher1.setName(name) # 修改 teacher1 的名字
teacher2.setBody(Body(height, weight)) # 修改 teacher2 的 Body, setBody(Body)

print(teacher1.toString()) # 使用print 輸出 toString (String)
