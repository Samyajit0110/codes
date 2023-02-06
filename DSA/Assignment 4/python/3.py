class Node:
    def __init__(self, coeff, expo):
        self.coeff = coeff
        self.expo = expo
        self.next = None


class Polynomial:
    def __init__(self):
        self.head = None

    def create(self):
        n = int(input("Enter number of terms: "))
        for i in range(n):
            coeff = int(input("Enter the Coefficient of term "+str(i+1)+": "))
            expo = int(input("Enter the Exponent of term " + str(i+1) + ": "))
            self.insert(coeff, expo)

    def insert(self, co, ex):
        newNode = Node(co, ex)
        temp = self.head
        if self.head is None or ex > temp.expo:
            newNode.next = self.head
            self.head = newNode
        else:
            while temp.next is not None and ex < temp.next.expo:
                temp = temp.next
            newNode.next = temp.next
            temp.next = newNode

    def display(self):
        if self.head is None:
            print("No Polynomial")
            return
        print("Your Polynomial Equation is:")
        temp = self.head
        while temp:
            print("( "+str(temp.coeff)+"x^"+str(temp.expo)+" )", end='')
            temp = temp.next
            if temp is not None:
                print(" + ", end='')

    def polyAdd(self, p1, p2):
        poly1 = p1
        poly2 = p2
        if poly1 is None and poly2 is None:
            print("Can't Multiply")
            return
        if poly1 is None and poly2 is not None:
            self.head = p2
            return
        if poly1 is not None and poly2 is None:
            self.head = p1
            return
        while poly1 and poly2:
            if poly1.expo > poly2.expo:
                self.insert(poly1.coeff, poly1.expo)
                poly1 = poly1.next
            elif poly1.expo < poly2.expo:
                self.insert(poly2.coeff, poly2.expo)
                poly2 = poly2.next
            else:
                self.insert(poly1.coeff+poly2.coeff, poly2.expo)
                poly1 = poly1.next
                poly2 = poly2.next
        while poly1:
            self.insert(poly1.coeff, poly1.expo)
            poly1 = poly1.next
        while poly2:
            self.insert(poly2.coeff, poly2.expo)
            poly2 = poly2.next


poly1 = Polynomial()
print("Enter First Polynomial")
poly1.create()
poly1.display()

poly2 = Polynomial()
print("\nEnter Second Polynomial")
poly2.create()
poly2.display()

sum = Polynomial()
sum.polyAdd(poly1.head, poly2.head)
print("\nPolynomial Added")
sum.display()
