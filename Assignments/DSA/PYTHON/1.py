# new_list = [None] * 10
# new_list = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
# print("Actual list\n", new_list)
# new_list.reverse()
# print("reversed list \n",new_list)
mylist = list()

print("Enter the size of list: ", end="")
tot = int(input())

print("Enter", tot, "elements for the list: ", end="")
for i in range(tot):
    mylist.append(input())

print("\nEnter an element to be search: ", end="")
elem = input()

poslist = list()
for i in range(tot):
    if elem == mylist[i]:
        poslist.append(i+1)

if len(poslist) == 0:
    print("\nElement not found in the list!")
elif len(poslist) == 1:
    print("\nElement found at position:", poslist[0])
else:
    print("\nElement found at positions:", end="")
    for i in range(len(poslist)):
        print(poslist[i], end=" ")