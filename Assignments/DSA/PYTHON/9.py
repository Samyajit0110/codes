new_list = [None]*10
for i in range(10):
    new_list[i] = i
to_be_replaced = int(input("Enter element to be replaced "))
replace_with = int(input("Enter number to be replaced with "))
for i in range(10):
    if new_list[i] == to_be_replaced:
        new_list[i] = replace_with
for i in new_list:
    print(i, end=" ")