// hero header files --
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//----------------------------

// hero function decleration --
void add();
void sub();
void multi();
void divi();
void si();
void ctof();
void pln();
void prn();
void pfn();
void arm();
void fact();
void facto();
void spy();
void mtxadd();
void mtxsub();
void mtxmulti();
void ar();
void as();
void at();
void ac();
//----------------------------

// Main body
int main()
{
    int opt, opt2, opt3, opt4;
    do
    {
        printf("\n----------------------\nDeveloped by:- @UdaykaCode\n----------------------\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Divison\n5. Matrix\n6. Simple Interest\n7. Calsius to Fahrenheit Temparature Conversion\n8. Digit Manipulation\n9. Measure the Area\n10. Exit from the Program\n----------------------\nEnter Your Choice : ");
        scanf("%d", &opt);
        switch (opt)
        {
        case 1:
            add();
            break;
        case 2:
            sub();
            break;
        case 3:
            multi();
            break;
        case 4:
            divi();
            break;
        case 5:
            do
            {
                printf("\n----------------------\nOptions :-\n----------------------\n1. Matrix Addition\n2. Matrix Subtraction\n3. Matrix Multiplication\n4. Back\n5. Exit from the Program\n----------------------\nEnter Your Choice : ");
                scanf("%d", &opt2);
                switch (opt2)
                {
                case 1:
                    mtxadd();
                    break;
                case 2:
                    mtxsub();
                    break;
                case 3:
                    mtxmulti();
                    break;
                case 4:
                    return main();
                case 5:
                    exit(1);
                default:
                    printf("Invalid Input");
                }
            } while (opt2 != 5);
            break;
        case 6:
            si();
            break;
        case 7:
            ctof();
            break;
        case 8:
            do
            {
                printf("\n----------------------\nOptions :-\n----------------------\n1. Palindrome Number\n2. Prime Number\n3. Perfect Number\n4. Armstrong Number\n5. Factorial Number\n6. Factors of a Number\n7. Spy Number\n8. Back\n9. Exit from the Program\n----------------------\nEnter Your Choice : ");
                scanf("%d", &opt3);
                switch (opt3)
                {
                case 1:
                    pln();
                    break;
                case 2:
                    prn();
                    break;
                case 3:
                    pfn();
                    break;
                case 4:
                    arm();
                    break;
                case 5:
                    fact();
                    break;
                case 6:
                    facto();
                    break;
                case 7:
                    spy();
                    break;
                case 8:
                    return main();
                case 9:
                    exit(1);
                default:
                    printf("Invalid Input");
                }
            } while (opt3 != 9);
            break;
        case 9:
            do
            {
                printf("\n----------------------\nOptions :-\n----------------------\n1. Find the Area of Rectangle\n2. Find the Area of Square\n3. Find the Area of Triangle\n4. Find the Area of Circle\n5. Back\n6. Exit from the Program\n----------------------\nEnter Your Choice : ");
                scanf("%d", &opt4);
                switch (opt4)
                {
                case 1:
                    ar();
                    break;
                case 2:
                    as();
                    break;
                case 3:
                    at();
                    break;
                case 4:
                    ac();
                    break;
                case 5:
                    return main();
                case 6:
                    exit(1);
                default:
                    printf("Invalid Input");
                }
            } while (opt4 != 6);
            break;
        case 10:
            printf("\n----------------------\nDeveloped by:- @UdaykaCode\n----------------------\n");
            exit(1);
        default:
            printf("Invalid Input");
        }
    } while (opt != 10);
    return 0;
}
//--------------------------------------------------------------------

// Addition -------------
void add()
{
    float num1, num2;
    printf("Enter : ");
    scanf("%f", &num1);
    printf("      +     \nEnter : ");
    scanf("%f", &num2);
    printf("\nThe Addition is : %.2f", (num1 + num2));
}
//--------------------------------------------------------------------

// Subtraction -----------
void sub()
{
    float num1, num2;
    printf("Enter : ");
    scanf("%f", &num1);
    printf("      -     \nEnter : ");
    scanf("%f", &num2);
    printf("\nThe Subtraction is : %.2f", (num1 - num2));
}
//--------------------------------------------------------------------

// Multiplication --------
void multi()
{
    float num1, num2;
    printf("Enter : ");
    scanf("%f", &num1);
    printf("      x     \nEnter : ");
    scanf("%f", &num2);
    printf("\nThe Multiplication is : %.2f", (num1 * num2));
}
//--------------------------------------------------------------------

// Division --------------
void divi()
{
    float num1, num2;
    printf("Enter : ");
    scanf("%f", &num1);
    printf("      /     \nEnter : ");
    scanf("%f", &num2);
    if (num2 == 0)
    {
        printf("Can't divide by zero !!!");
    }
    else
    {
        printf("\nThe Division is : %.2f", (num1 / num2));
    }
}
//---------------------------------------------------------------------

// Simple Interest--------
void si()
{
    float p, r, t, s;
    printf("Enter the Amount : ");
    scanf("%f", &p);
    printf("Enter the Rate : ");
    scanf("%f", &r);
    printf("Enter the Time : ");
    scanf("%f", &t);
    s = (p * r * t) / 100;
    printf("Your Simple Interest is : %.2f", s);
    printf("\nThe Total Amount : %.2f", (p + s));
}
//----------------------------------------------------------------------

// Calsius to Fahrenheit--
void ctof()
{
    int cel, fah = 0;
    printf("Enter the value in Celsius : ");
    scanf("%d", &cel);
    fah = (((cel * 9) / 5) + 32);
    printf("\n Celsisu to Fahrenheit is : %d Degree", fah);
}
//----------------------------------------------------------------------

// Palindrome Number -----
void pln()
{
    int num, d, r, s = 0;
    printf("Enter any Number : ");
    scanf("%d", &num);
    int c = num;
    while (num > 0)
    {
        d = num % 10;
        s = s * 10 + d;
        num = num / 10;
    }
    if (s == c)
    {
        printf("\n%d is Palindrome Number", s);
    }
    else
    {
        printf("\n%d is not a Palindrome Number", s);
    }
}
//-----------------------------------------------------------------------

// Prime Number ------------
void prn()
{
    int i, num, count = 0;
    printf("Enter any Number : ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
            count++;
    }
    if (count == 2)
    {
        printf("\n%d is Prime Number", num);
    }
    else
    {
        printf("\n%d is not a Prime Number", num);
    }
}
//-----------------------------------------------------------------------

// Perfect Number -----------
void pfn()
{
    int i, num, sum = 0;
    printf("Enter any Number : ");
    scanf("%d", &num);
    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
            sum = sum + i;
    }
    if (sum == num)
    {
        printf("\n%d is Perfect Number", num);
    }
    else
    {
        printf("\n%d is not a Perfect Number", num);
    }
}
//-----------------------------------------------------------------------

// Armstrong Number ---------
void arm()
{
    int num, d, e, sum = 0, count = 0;
    printf("Enter any Number : ");
    scanf("%d", &num);
    e = num;
    while (e > 0)
    {
        count++;
        e = e / 10;
    }
    e = num;
    while (e > 0)
    {
        d = e % 10;
        sum = sum + ((int)pow(d, count));
        e = e / 10;
    }

    if(sum==num){
        printf("\n%d is an Armstrong Number",num);
    }
    else{
    printf("\n%d is not an Armstrong Number",num);
    }
}
//-----------------------------------------------------------------------

// Factorial Number ---------
void fact()
{
    int i, num, d, e, pro = 1, count = 0;
    printf("Enter any Number : ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
        pro = pro * i;
    printf("\n%d Factorial is : %d", num, pro);
}
//-----------------------------------------------------------------------

// Factors of a Number ------
void facto()
{
    int num, i;
    printf("Enter any number : ");
    scanf("%d", &num);
    printf("Factors of %d are: ", num);
    for (i = 1; i <= num; ++i)
    {
        if (num % i == 0)
            printf("%d,", i);
    }
}
//-----------------------------------------------------------------------

// Spy Number ---------------
void spy()
{
    int num, e, i, d, sum = 0, pro = 1;
    printf("Enter any number : ");
    scanf("%d", &num);
    e = num;
    while (num > 0)
    {
        d = num % 10;
        sum = sum + d;
        pro = pro * d;
        num = num / 10;
    }
    if (sum == pro)
    {
        printf("\n%d is Spy Number", e);
    }
    else
    {
        printf("\n%d is not a Spy Number", e);
    }
}
//-----------------------------------------------------------------------

// Matrix Addition ----------
void mtxadd()
{
    int rows, cols;
    int **matrix1, **matrix2, **sum;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    matrix1 = (int **)malloc(rows * sizeof(int *));
    matrix2 = (int **)malloc(rows * sizeof(int *));
    sum = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++)
    {
        matrix1[i] = (int *)malloc(cols * sizeof(int));
        matrix2[i] = (int *)malloc(cols * sizeof(int));
        sum[i] = (int *)malloc(cols * sizeof(int));
    }
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("matrix1[%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("matrix2[%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("The Matrix Addition is :\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    // Free the allocated memory
    for (int i = 0; i < rows; i++)
    {
        free(matrix1[i]);
        free(matrix2[i]);
        free(sum[i]);
    }
    free(matrix1);
    free(matrix2);
    free(sum);
}
//-----------------------------------------------------------------------

// Matrix Subtraction -------
void mtxsub()
{
    int rows, cols;
    int **matrix1, **matrix2, **sub;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    matrix1 = (int **)malloc(rows * sizeof(int *));
    matrix2 = (int **)malloc(rows * sizeof(int *));
    sub = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++)
    {
        matrix1[i] = (int *)malloc(cols * sizeof(int));
        matrix2[i] = (int *)malloc(cols * sizeof(int));
        sub[i] = (int *)malloc(cols * sizeof(int));
    }
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("matrix1[%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("matrix2[%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sub[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
    printf("The Matrix Subtraction is :\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", sub[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < rows; i++)
    {
        free(matrix1[i]);
        free(matrix2[i]);
        free(sub[i]);
    }
    free(matrix1);
    free(matrix2);
    free(sub);
}
//-----------------------------------------------------------------------

// Matrix Multiplication ----
void mtxmulti()
{
    int rows1, cols1, rows2, cols2;
    int **matrix1, **matrix2, **multi;
    printf("Enter the number of rows for the first matrix: ");
    scanf("%d", &rows1);
    printf("Enter the number of columns for the first matrix: ");
    scanf("%d", &cols1);
    printf("Enter the number of rows for the second matrix: ");
    scanf("%d", &rows2);
    printf("Enter the number of columns for the second matrix: ");
    scanf("%d", &cols2);
    if (cols1 != rows2)
    {
        printf("Matrix multiplication is not possible.\n");
        exit(1);
    }
    matrix1 = (int **)malloc(rows1 * sizeof(int *));
    matrix2 = (int **)malloc(rows2 * sizeof(int *));
    multi = (int **)malloc(rows1 * sizeof(int *));
    for (int i = 0; i < rows1; i++)
        matrix1[i] = (int *)malloc(cols1 * sizeof(int));
    for (int i = 0; i < rows2; i++)
        matrix2[i] = (int *)malloc(cols2 * sizeof(int));
    for (int i = 0; i < rows1; i++)
        multi[i] = (int *)malloc(cols2 * sizeof(int));

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            printf("matrix1[%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            printf("matrix2[%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            multi[i][j] = 0;
        }
    }

    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            for (int k = 0; k < cols1; k++)
            {
                multi[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    printf("The Matrix Multiplication is :\n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            printf("%d ", multi[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < rows1; i++)
        free(matrix1[i]);
    for (int i = 0; i < rows2; i++)
        free(matrix2[i]);
    for (int i = 0; i < rows1; i++)
        free(multi[i]);

    free(matrix1);
    free(matrix2);
    free(multi);
}
//-----------------------------------------------------------------------

// Area of Rectangle ------------------------
void ar()
{
    float l, b;
    printf("Enter the Length : ");
    scanf("%f", &l);
    printf("Enter the Breath : ");
    scanf("%f", &b);
    printf("The Area of Rectangle : %.2f", (l * b));
}
//-----------------------------------------------------------------------

// Area of Square ---------------------------
void as()
{
    float s;
    printf("Enter the value of Side : ");
    scanf("%f", &s);
    printf("The Area of Square : %.2f", (s * s));
}
//-----------------------------------------------------------------------

// Area of Triangle -------------------------
void at()
{
    float f, s, t, l, d, p;
    printf("Enter the First Side : ");
    scanf("%f", &f);
    printf("Enter the Second Side : ");
    scanf("%f", &s);
    printf("Enter the Third Side : ");
    scanf("%f", &t);
    l = (f + s + t) / 2;
    d = l * (l - f) * (l - s) * (l - t);
    p = sqrt(l);
    printf("The Area of Triangle : %.2f", p);
}
//-----------------------------------------------------------------------
// Area of Circle ---------------------------
void ac()
{
    float r;
    printf("Enter the Radius : ");
    scanf("%f", &r);
    printf("The Area of Circle is : %.2f", (3.14 * r * r));
}
//-----------------------------------------------------------------------