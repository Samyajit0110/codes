def square(n):
    return n*n


new_list = [None]*10
for i in range(10):
    new_list[i] = i+1
resultant_list = map(square, new_list)
print("resultant list: ", list(resultant_list))
