// User verification.
// #define _UNICODE
// #define UNICODE

#include <stdio.h>

int main()
{
    char userName[20];
    char pwd[10];
    int choice = -1;
    int reservationNo, seats, seatNumber, CustId;

    printf("Please enter your user name : \n");
    scanf("%s", &userName);
    printf("Please enter your password : \n");
    scanf("%d", &pwd);
    printf("Registered successfully.");
    printf("\n\n=========================================================================================\n");
    printf("\n\t\t\tWELCOME TO ONLINE BUS RESERVATION");
    printf("\n\n=========================================================================================\n\n");
    printf("\n\t\t\tPLEASE TAKE A LOOK DETAILS OF BUS SCHEDULE : \n");
    printf("=========================================================================================");
    printf("\nBus No.\t\tName\t\t\tDestinations  \t\tCharges  \tTime\n");
    printf("=========================================================================================");
    printf("\n1\t\tGangaTravels         \tDharan to Kavre       \tRs.70   \t07:00  AM");
    printf("\n2\t\tPhaphara Travels     \tKavre To Dharan       \tRs.55    \t01:30  PM");
    printf("\n3\t\tShiv Ganga Travels   \tAllahabad To Gorakhpur\tRs.40    \t03:50  PM");
    printf("\n4\t\tSuper Deluxe         \tPokhara To Benigha    \tRs.70    \t01:00  AM");
    printf("\n5\t\tSai Baba Travels     \tMaitidevi To Janakpur \tRs.55    \t12:05  AM");
    printf("\n6\t\tShine On Travels     \tMadhubani to Patna    \tRs.40    \t09:30  AM");
    printf("\n7\t\tMayur Travels        \tPatna To Gaya         \tRs.70   \t11:00  PM");
    printf("\n8\t\tRajjo Travels       \tBegusarai To Patna     \tRs.55    \t08:15  AM");
    printf("\n9\t\tShree Travels        \tGaya To Chhapra       \tRs.40    \t04:00  PM");

    printf("\n\n============================================\n\n");
    printf("ENTER THE BUS NUMBER: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
    {
        printf("\n\t\t\tPLEASE RESERVE YOUR SEAT : \n");
    busSeatChoice1:
        printf("\nNO. OF SEATS YOU NEED TO BOOK : ");
        scanf("%d", &seats);
        if (seats <= 0)
        {
            printf("\nENTER VALID SEAT NUMBER!!\n");
            goto busSeatChoice1;
        }
        else if (seats > 32)
        {
            printf("\nENTER VALID SEAT NUMBER WE HAVE ONLY 32 SEATS IN A BUS !!\n");
            goto busSeatChoice1;
        }
        for (int i = 1; i <= seats; i++)
        {
            printf("\n\n==================================================================================\n\n");
        seat1:
            printf("   ENTER THE SEAT NUMBER: ");
            scanf("%d", &seatNumber);
            if (seatNumber <= 0)
            {
                printf("\n   ENTER VALID SEAT NUMBER!!\n\n");
                goto seat1;
            }
            else if (seatNumber > 32)
            {
                printf("\n   ENTER VALID SEAT NUMBER WE HAVE ONLY 32 SEATS IN A BUS !!\n\n");
                goto seat1;
            }
            CustId = choice * 1000 + seatNumber; // CustumerId
            printf("\n   YOUR CUSTOMER ID IS : %d", CustId);
        }
        break;
    }
    case 2:
    {
        printf("\n\t\t\tPLEASE RESERVE YOUR SEAT : \n");
    busSeatChoice2:
        printf("\nNO. OF SEATS YOU NEED TO BOOK : ");
        scanf("%d", &seats);
        if (seats <= 0)
        {
            printf("\nENTER VALID SEAT NUMBER!!\n");
            goto busSeatChoice2;
        }
        else if (seats > 32)
        {
            printf("\nENTER VALID SEAT NUMBER WE HAVE ONLY 32 SEATS IN A BUS !!\n");
            goto busSeatChoice2;
        }
        for (int i = 1; i <= seats; i++)
        {
            printf("\n\n==================================================================================\n\n");
        seat2:
            printf("   ENTER THE SEAT NUMBER: ");
            scanf("%d", &seatNumber);
            if (seatNumber <= 0)
            {
                printf("\n   ENTER VALID SEAT NUMBER!!\n\n");
                goto seat2;
            }
            else if (seatNumber > 32)
            {
                printf("\n   ENTER VALID SEAT NUMBER WE HAVE ONLY 32 SEATS IN A BUS !!\n\n");
                goto seat2;
            }
            CustId = choice * 1000 + seatNumber; // CustumerId
            printf("\n   YOUR CUSTOMER ID IS : %d", CustId);
        }
        break;
    }
    case 3:
    {
        printf("\n\t\t\tPLEASE RESERVE YOUR SEAT : \n");
    busSeatChoice3:
        printf("\nNO. OF SEATS YOU NEED TO BOOK : ");
        scanf("%d", &seats);
        if (seats <= 0)
        {
            printf("\nENTER VALID SEAT NUMBER!!\n");
            goto busSeatChoice3;
        }
        else if (seats > 32)
        {
            printf("\nENTER VALID SEAT NUMBER WE HAVE ONLY 32 SEATS IN A BUS !!\n");
            goto busSeatChoice3;
        }
        for (int i = 1; i <= seats; i++)
        {
            printf("\n\n==================================================================================\n\n");
        seat3:
            printf("   ENTER THE SEAT NUMBER: ");
            scanf("%d", &seatNumber);
            if (seatNumber <= 0)
            {
                printf("\n   ENTER VALID SEAT NUMBER!!\n\n");
                goto seat3;
            }
            else if (seatNumber > 32)
            {
                printf("\n   ENTER VALID SEAT NUMBER WE HAVE ONLY 32 SEATS IN A BUS !!\n\n");
                goto seat3;
            }
            CustId = choice * 1000 + seatNumber; // CustumerId
            printf("\n   YOUR CUSTOMER ID IS : %d", CustId);
        }
        break;
    }
    case 4:
    {
        printf("\n\t\t\tPLEASE RESERVE YOUR SEAT : \n");
    busSeatChoice4:
        printf("\nNO. OF SEATS YOU NEED TO BOOK : ");
        scanf("%d", &seats);
        if (seats <= 0)
        {
            printf("\nENTER VALID SEAT NUMBER!!\n");
            goto busSeatChoice4;
        }
        else if (seats > 32)
        {
            printf("\nENTER VALID SEAT NUMBER WE HAVE ONLY 32 SEATS IN A BUS !!\n");
            goto busSeatChoice4;
        }
        for (int i = 1; i <= seats; i++)
        {
            printf("\n\n==================================================================================\n\n");
        seat4:
            printf("   ENTER THE SEAT NUMBER: ");
            scanf("%d", &seatNumber);
            if (seatNumber <= 0)
            {
                printf("\n   ENTER VALID SEAT NUMBER!!\n\n");
                goto seat4;
            }
            else if (seatNumber > 32)
            {
                printf("\n   ENTER VALID SEAT NUMBER WE HAVE ONLY 32 SEATS IN A BUS !!\n\n");
                goto seat4;
            }
            CustId = choice * 1000 + seatNumber; // CustumerId
            printf("\n   YOUR CUSTOMER ID IS : %d", CustId);
        }
        break;
    }
    case 5:
    {
        printf("\n\t\t\tPLEASE RESERVE YOUR SEAT : \n");
    busSeatChoice5:
        printf("\nNO. OF SEATS YOU NEED TO BOOK : ");
        scanf("%d", &seats);
        if (seats <= 0)
        {
            printf("\nENTER VALID SEAT NUMBER!!\n");
            goto busSeatChoice5;
        }
        else if (seats > 32)
        {
            printf("\nENTER VALID SEAT NUMBER WE HAVE ONLY 32 SEATS IN A BUS !!\n");
            goto busSeatChoice5;
        }
        for (int i = 1; i <= seats; i++)
        {
            printf("\n\n==================================================================================\n\n");
        seat5:
            printf("   ENTER THE SEAT NUMBER: ");
            scanf("%d", &seatNumber);
            if (seatNumber <= 0)
            {
                printf("\n   ENTER VALID SEAT NUMBER!!\n\n");
                goto seat5;
            }
            else if (seatNumber > 32)
            {
                printf("\n   ENTER VALID SEAT NUMBER WE HAVE ONLY 32 SEATS IN A BUS !!\n\n");
                goto seat5;
            }
            CustId = choice * 1000 + seatNumber; // CustumerId
            printf("\n   YOUR CUSTOMER ID IS : %d", CustId);
        }
        break;
    }
    case 6:
    {
        printf("\n\t\t\tPLEASE RESERVE YOUR SEAT : \n");
    busSeatChoice6:
        printf("\nNO. OF SEATS YOU NEED TO BOOK : ");
        scanf("%d", &seats);
        if (seats <= 0)
        {
            printf("\nENTER VALID SEAT NUMBER!!\n");
            goto busSeatChoice6;
        }
        else if (seats > 32)
        {
            printf("\nENTER VALID SEAT NUMBER WE HAVE ONLY 32 SEATS IN A BUS !!\n");
            goto busSeatChoice6;
        }
        for (int i = 1; i <= seats; i++)
        {
            printf("\n\n==================================================================================\n\n");
        seat6:
            printf("   ENTER THE SEAT NUMBER: ");
            scanf("%d", &seatNumber);
            if (seatNumber <= 0)
            {
                printf("\n   ENTER VALID SEAT NUMBER!!\n\n");
                goto seat6;
            }
            else if (seatNumber > 32)
            {
                printf("\n   ENTER VALID SEAT NUMBER WE HAVE ONLY 32 SEATS IN A BUS !!\n\n");
                goto seat6;
            }
            CustId = choice * 1000 + seatNumber; // CustumerId
            printf("\n   YOUR CUSTOMER ID IS : %d", CustId);
        }
        break;
    }
    case 7:
    {
        printf("\n\t\t\tPLEASE RESERVE YOUR SEAT : \n");
    busSeatChoice7:
        printf("\nNO. OF SEATS YOU NEED TO BOOK : ");
        scanf("%d", &seats);
        if (seats <= 0)
        {
            printf("\nENTER VALID SEAT NUMBER!!\n");
            goto busSeatChoice7;
        }
        else if (seats > 32)
        {
            printf("\nENTER VALID SEAT NUMBER WE HAVE ONLY 32 SEATS IN A BUS !!\n");
            goto busSeatChoice7;
        }
        for (int i = 1; i <= seats; i++)
        {
            printf("\n\n==================================================================================\n\n");
        seat7:
            printf("   ENTER THE SEAT NUMBER: ");
            scanf("%d", &seatNumber);
            if (seatNumber <= 0)
            {
                printf("\n   ENTER VALID SEAT NUMBER!!\n\n");
                goto seat7;
            }
            else if (seatNumber > 32)
            {
                printf("\n   ENTER VALID SEAT NUMBER WE HAVE ONLY 32 SEATS IN A BUS !!\n\n");
                goto seat7;
            }
            CustId = choice * 1000 + seatNumber; // CustumerId
            printf("\n   YOUR CUSTOMER ID IS : %d", CustId);
        }
        break;
    }
    case 8:
    {
        printf("\n\t\t\tPLEASE RESERVE YOUR SEAT : \n");
    busSeatChoice8:
        printf("\nNO. OF SEATS YOU NEED TO BOOK : ");
        scanf("%d", &seats);
        if (seats <= 0)
        {
            printf("\nENTER VALID SEAT NUMBER!!\n");
            goto busSeatChoice8;
        }
        else if (seats > 32)
        {
            printf("\nENTER VALID SEAT NUMBER WE HAVE ONLY 32 SEATS IN A BUS !!\n");
            goto busSeatChoice8;
        }
        for (int i = 1; i <= seats; i++)
        {
            printf("\n\n==================================================================================\n\n");
        seat8:
            printf("   ENTER THE SEAT NUMBER: ");
            scanf("%d", &seatNumber);
            if (seatNumber <= 0)
            {
                printf("\n   ENTER VALID SEAT NUMBER!!\n\n");
                goto seat8;
            }
            else if (seatNumber > 32)
            {
                printf("\n   ENTER VALID SEAT NUMBER WE HAVE ONLY 32 SEATS IN A BUS !!\n\n");
                goto seat8;
            }
            CustId = choice * 1000 + seatNumber; // CustumerId
            printf("\n   YOUR CUSTOMER ID IS : %d", CustId);
        }
        break;
    }
    case 9:
    {
        printf("\n\t\t\tPLEASE RESERVE YOUR SEAT : \n");
    busSeatChoice9:
        printf("\nNO. OF SEATS YOU NEED TO BOOK : ");
        scanf("%d", &seats);
        if (seats <= 0)
        {
            printf("\nENTER VALID SEAT NUMBER!!\n");
            goto busSeatChoice9;
        }
        else if (seats > 32)
        {
            printf("\nENTER VALID SEAT NUMBER WE HAVE ONLY 32 SEATS IN A BUS !!\n");
            goto busSeatChoice9;
        }
        for (int i = 1; i <= seats; i++)
        {
            printf("\n\n==================================================================================\n\n");
        seat9:
            printf("   ENTER THE SEAT NUMBER: ");
            scanf("%d", &seatNumber);
            if (seatNumber <= 0)
            {
                printf("\n   ENTER VALID SEAT NUMBER!!\n\n");
                goto seat9;
            }
            else if (seatNumber > 32)
            {
                printf("\n   ENTER VALID SEAT NUMBER WE HAVE ONLY 32 SEATS IN A BUS !!\n\n");
                goto seat9;
            }
            CustId = choice * 1000 + seatNumber; // CustumerId
            printf("\n   YOUR CUSTOMER ID IS : %d", CustId);
        }
        break;
    }
    default:
        printf("\nENTER VALID BUS NUMBER WE HAVE ONLY 9 BUS !!\n\n");
    }

    printf("\n\n=====================================================================\n\n");
    printf("THANK YOU FOR USING THIS BUS RESERVATION SYSTEM");
    printf("\n\nPRESS ANY KEY TO EXIT THE END PROGRAM !! \n");
    printf("\n\n");

    return 0;
}