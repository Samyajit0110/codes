list1 = [None]*10
list2 = [None]*10
for i in range(10):
    list1[i] = i+1
    list2[i] = 10+i+1
for i, j in zip(list1, list2):
    print("Element in list 1 and list 2 respectively:", i, " & ", j)
