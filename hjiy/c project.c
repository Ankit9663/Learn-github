#include<stdio.h>
#include<time.h>
void main()
{
    printf("----------WELCOME TO LIBRARY MANAGEMENT-----------\n\n");
    printf("----------------MAIN MENU----------------\n\n");
    printf("1 : RETURN BOOK\n");
    printf("2 : DISPLAY BOOK INFORMATION\n");
    printf("3 : REQUEST BOOKS\n");
    printf("4 : EXIT\n\n");

    int a1;
    float week;
    printf("Choose an option :- ");
    scanf("%d",&a1);
    printf("\n");

    if(a1==1)
    {
       printf("1 : COMPUTER\n");
       printf("2 : NOVEL\n");
       printf("3 : POETRY\n\n");
       int a2;
       printf("Choose the category of book :- ");
       scanf("%d",&a2);
       if(a2==1)
       {
           char book_name[50];
           char author_name[100];
           printf("You have choosed COMPUTER category.\n\n");
           printf("Enter the name of book : ");
           fflush(stdin);
           scanf("%[^\n]",book_name);
           fflush(stdin);
           printf("Enter the name of the Author.");
           scanf("%[^\n]",&author_name);

           printf("After how many weeks the book is returned.");
           scanf("%f",&week);
           float rent=20*week;

           printf("You have successfully returned %s book of the %s author.\n",book_name,author_name);
           printf("Rent of the book is %.2f",rent);

       }


        else if(a2==2)
        {
           char book_name[50];
           char author_name[100];
           printf("You have choosed NOVEL category.\n\n");
           printf("Enter the name of book : ");
           fflush(stdin);
           gets(book_name);
           printf("Enter the name of the Author.");
           fflush(stdin);
           scanf("%[^\n]",&author_name);
           printf("After how many weeks the book is returned.");
           scanf("%f",&week);
           float rent=20*week;

           printf("You have successfully returned %s book of the %s author.\n",book_name,author_name);
           printf("Rent of the book is %.2f",rent);
        }
        else if(a2==3)
        {
           char book_name[50];
           char author_name[100];
           printf("You have choosed POETRY category.\n\n");
           printf("Enter the name of book : ");
           fflush(stdin);
           scanf("%[^\n]",book_name);
           printf("Enter the name of the Author.");
           fflush(stdin);
           scanf("%[^\n]",&author_name);

           printf("After how many weeks the book is returned.");
           scanf("%f",&week);
           float rent=20*week;

           printf("You have successfully returned %s book of the %s author.\n",book_name,author_name);
           printf("Rent of the book is %.2f",rent);
        }
    }
    else if(a1==2)
    {
        printf("Enter code 123 to display computer books.\n");
        printf("Enter code 456 to display novel books.\n");
        printf("Enter code 789 to display poetry books.\n");
        int a3;
        printf("Enter code :- ");
        scanf("%d",&a3);
        printf("\n");

        switch(a3)
        {
            case 123:
            printf("Here is the list of computer books\n");
            printf("\nINTRODUCTION TO C\n");
            printf("CODE COMPLETE:A PRACTICAL HANDBOOK OF SOFTWARE CONSTRUCTION\n");
            printf("AUTOMATE THE BORING STUFF \n");
            printf("PYTHON CRASH COURSE\n");
            printf("HEAD FIRST JAVA\n");
            break;

            case 456:
            printf("Here is the list of novel books\n");
            printf("\nTHE KITE RUNNER\n");
            printf("THE LORD OF THE RINGS\n");
            printf("THE HUNGER GAMES\n");
            printf("GONE WITH THE WIND\n");
            printf("THE GIRL WITH THE DRAGON TATTO \n");
            break;

            case(789):
            printf("Here is the list of poetry books\n");
            printf("\nMILK AND HONEY\n");
            printf("LEAVES OF GRASS\n");
            printf("THE LOVE POEMS OF RUMI\n");
            printf("A DREAM WITHIN A DREAM\n");
            printf("MILK AND WINE \n");
            break;

            default:
                printf("Enter valid code.\n");
        }
    }
    else if(a1==3)
    {
        requestBook();
    }
    else if(a1==4)
    {
        printf("The library is closed.");
    }
    else
    {
        printf("Enter valid choice.");
    }

}
void requestBook()
{   int x, y;
    srand(time(NULL));
    y = rand();
    y = y % 10;

    printf("Enter the number of books you want to request: ");
    scanf("%d", &x);

    char str[x][60];

    for (int i = 0; i < x; i++) {
        printf("Enter name of the book you want to request: ");
        fflush(stdin);
        scanf(" %[^\n]", &str[i][60]);
    }

    if (y == 0) {
        printf("SORRY!!!\n");
        printf("The requested books are not available.\n");
    } else {
        printf("\nThe requested book will be available after %d days.\n", y);
    }
}






