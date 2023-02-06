#include "polynomialLL.h"

NODE *polyAdd(NODE *, NODE *);

int main()
{
    NODE *poly1 = NULL, *poly2 = NULL;

    printf("Enter First Polynomial\n");
    poly1 = create(poly1);
    display(poly1);

    printf("\nEnter Second Polynomial\n");
    poly2 = create(poly2);
    display(poly2);

    NODE *sum = polyAdd(poly1, poly2);
    printf("\nPolynomial Added\n");
    display(sum);
    return 0;
}

NODE *polyAdd(NODE *p1, NODE *p2)
{
    NODE *poly1 = p1, *poly2 = p2;
    NODE *sum = NULL;
    if (poly1 == NULL && poly2 == NULL)
        return sum;
    if (poly1 != NULL && poly2 == NULL)
        return poly1;
    if (poly1 == NULL && poly2 != NULL)
        return poly2;
    while (poly1 != NULL && poly2 != NULL)
    {
        if (poly1->expo > poly2->expo)
        {
            sum = insert(sum, poly1->coeff, poly1->expo);
            poly1 = poly1->next;
        }
        else if (poly1->expo < poly2->expo)
        {
            sum = insert(sum, poly2->coeff, poly2->expo);
            poly2 = poly2->next;
        }
        else
        {
            sum = insert(sum, poly1->coeff + poly2->coeff, poly1->expo);
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
    }
    while (poly1 != NULL)
    {
        sum = insert(sum, poly1->coeff, poly1->expo);
        poly1 = poly1->next;
    }
    while (poly2 != NULL)
    {
        sum = insert(sum, poly2->coeff, poly2->expo);
        poly2 = poly2->next;
    }
    return sum;
}
