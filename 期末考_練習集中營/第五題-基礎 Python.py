def binarySearch(lst, key):
    low = 0
    height = len(lst) -1 
    
    while height >= low:
        mid = (low + height) // 2
        if key < lst[mid]:
            height = mid -1
        elif key == lst[mid]:
            return mid
        else:
            low = mid +1
            
    return -1 # Not Found

 
# 換個寫法， 輸入六個值到 num[]    

list1 = [1, 3, 5, 7, 9, 11, 13, 15, 17] #整數
list2 = [1.1, 3.3, 5.5, 7.7, 9.9, 11.1, 13.3, 15.5, 17.7] #浮點數

num = [] #輸入的六個值，都放這
for i in range(6):
    num.append(input()) #一個一個往後加上去， 使用 append

print("list1", list1)   
for i in range(0,3,1):  # output List1 (int) 
    print("{} at {}".format(num[i], binarySearch(list1, int(num[i])))) #從 list1中找尋

print() #endl

print("list2", list2)
for i in range(3,6,1):  #range(3,6,1) = 3,4,5
    print("{} at {}".format(num[i], binarySearch(list2, float(num[i])))) #從 list2中找尋
    
    