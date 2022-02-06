def common_member(a, b):
	a_set = set(a)
	b_set = set(b)

	if (a_set & b_set):
		print(a_set & b_set)
	else:
		print("No common elements")
a = [4, 2, 8, 9, 8]
b = [5, 6, 4, 8, 9]
common_member(a, b)
a = [1, 2, 3, 4, 5]
b = [6, 7, 8, 9]
common_member(a, b)