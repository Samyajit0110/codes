list1 = [None]*10
list2 = [None]*10
for i in range(10):
    list1[i] = i+1
    list2[i] = 10+i+1
print("list1 :", list1)
print("list1 :", list2)
list_merged = list1+list2
print("After merge: ", list_merged)
