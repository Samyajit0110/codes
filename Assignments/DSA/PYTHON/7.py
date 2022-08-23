from xml.dom.minidom import Element


new_list = [None]*10
for i in range(10):
    new_list[i] = i+1
print("Enter position and element to be inserted\n")
position = int(input())
element = int(input())
new_list.insert(position,element)
for i in new_list:
    print(i,end=" ")