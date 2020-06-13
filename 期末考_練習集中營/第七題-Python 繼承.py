from Cuboid_Last_7 import Cuboid
from Shape_Last_7 import Shape
from Sphere_Last_7 import Sphere

# 以下皆為輸入 Sphere
spRadius = float(input()) 
spColor = str(input())
# 以下皆為輸入 Cuboid
cuLength = float(input())
cuWidth = float(input())
cuHeight = float(input())
cuColor = str(input())

# 建造物件
sp = Sphere(spRadius, spColor)
cu = Cuboid(cuLength, cuWidth, cuHeight, cuColor)

# 輸出
print("Sphere:(%d),%.1f,%s"%(sp.getRadius(), sp.getVolume(), sp.getColor()))
print("Cuboid:(%d,%d,%d),%.1f,%s"%(cu.getLength(), cu.getWidth(), cu.getHeight(), cu.getVolume(), cu.getColor()))