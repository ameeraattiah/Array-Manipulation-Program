#include <stdio.h>

// Important line below!
extern int inc();
extern int add();
extern int sub();

void c_inc(int array[], int arraySize)
{
    int inc_arr[arraySize];
    int num;
    for (int i = 0; i < arraySize; i++)
    {
        num = inc(array[i]);
        inc_arr[i] = num;
    }
    printf("\nIncremented array: ");
    for (int i = 0; i < arraySize; i++)
        printf(" %d ", inc_arr[i]);
}

void c_add(int array[], int arraySize, int number)
{
    int add_arr[arraySize];
    int num;
    for (int i = 0; i < arraySize; i++)
    {
        num = add(array[i],number);
        add_arr[i] = num;
    }
    printf("\nAdding THREE to each element in the array: ");
    for (int i = 0; i < arraySize; i++)
        printf("%d ", add_arr[i]);
}

void c_sub(int array[], int arraySize, int number)
{
    int sub_arr[arraySize];
    int num;
    for (int i = 0; i < arraySize; i++)
    {
        num = sub(array[i],number);
        sub_arr[i] = num;
    }
    printf("\nSubtracting %d",number);
    printf(" from each element in the array: ");
    for (int i = 0; i < arraySize; i++)
        printf("%d ", sub_arr[i]);
}

int main(int argc, char *argv[])
{
    int i;
    int element;
    int arraySize;

    printf("Hello! \n");
    printf("\n");

    printf("How many elements do you want in the array: \n");
    scanf("%d", &arraySize);

    int array[arraySize];

    printf("List the elements for the array: \n");

    for (i = 0; i < arraySize; i++)
    {
        printf("Element %d", i + 1);
        printf(": ");

        scanf("%d", &array[i]);
    }

    char answer = 'y';

    while (answer == 'y')
    {
        printf("\n---------------------------------------\n");
        printf("\n");
        printf("MENU\n");
        printf("1) Print the Array \n");
        printf("2) Increment each element in the array\n");
        printf("3) Add a number to all the elements in the array\n");
        printf("4) Subtract a number from all the elements in the array\n");
        printf("5) Exit the program\n");

        int num;
        printf("Choose a number from the following: ");
        scanf("%d", &num);

        if (num == 1)
        {
            printf("The array:");

            for (int i = 0; i < arraySize; i++)
            {
                printf(" %d ", array[i]);
            }
        }
        else if (num == 2)
        {
            c_inc(array, arraySize);
        }

        else if (num == 3)
        {
            int number;
            printf("How much do you want to add to each element in the array: ");
            scanf("%d", &number);
            printf("\n");

            c_add(array, arraySize, number);
        }
        else if (num == 4)
        {
            int number;
            printf("How much do you want to subtract from each element in the array: ");
            scanf("%d", &number);
            printf("\n");

            c_sub(array, arraySize, number);
        }
        else if (num == 5)
        {
            printf("Exiting the Program . . .\n");
            break;
        }
        else
        {
            printf("Do you want to go back to the MENU? (y OR n) ");
            scanf("%s", &answer);
        }
    }
    return 0;
}


