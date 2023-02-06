def reverse_string(str):
    print("Original String: "+str)
    print("Reversed String: ", end='')
    stack = []
    for i in str:
        stack.append(i)
    while len(stack) > 0:
        print(stack.pop(), end="")
    print()
reverse_string("hello world")