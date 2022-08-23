old_list = [1, 2, 3, 4, 8, 2, 6, 8]


def to_remove(element):
    to_be_deleted = int(input("Enter element to be removed(all occurences) "))
    for i in old_list:
        if i == element:
            return False
        else:
            return True


new_list = filter(to_remove, old_list)
for i in new_list:
    print(i,end=" ")
