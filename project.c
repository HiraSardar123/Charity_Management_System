#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>
//smabbas hira sami bscs12c

//Defining functions for colours
void red () 
{
  printf("\033[1;31m");
}

void yellow () 
{
  printf("\033[1;33m");
}


void green () 
{
  printf("\033[1;32m");
}

void reset () 
{
  printf("\033[0m");
}

void format(void)
{
        green();
        printf("\t\t\t\t\tCharity Management System ");
        reset();
        printf("Copyright © ");
        yellow();
        printf("1997 ");
        reset();
        printf("ASH Technologies Private Limited\t\t\t\t\t");
}

void thanks()
{
                        printf("\t\t\t\t---------------------------------------------------\n");
                        printf("\t\t\t\t|                                                 |\n");
                        printf("\t\t\t\t|                    THANK YOU                    |\n");
                        printf("\t\t\t\t|                      for                        |\n");
                        printf("\t\t\t\t|                    Choosing                     |\n");
                        printf("\t\t\t\t|                      CMS                        |\n");
                        printf("\t\t\t\t|                                                 |\n");
                        printf("\t\t\t\t|                                                 |\n");
                        printf("\t\t\t\t|                                                 |\n");
                        printf("\t\t\t\t---------------------------------------------------\n\n\n");
}


void donate()
{
                                printf("\t\t\t\t---------------------------------------------------\n");
                                printf("\t\t\t\t|                                                 |\n");
                                printf("\t\t\t\t|                                                 |\n");
                                printf("\t\t\t\t|                                                 |\n");
                                printf("\t\t\t\t|          How Much Do You want to donate?        |\n");
                                printf("\t\t\t\t|                                                 |\n");
                                printf("\t\t\t\t|                                                 |\n");
                                printf("\t\t\t\t|                                                 |\n");
                                printf("\t\t\t\t|                                                 |\n");
                                printf("\t\t\t\t|                                                 |\n");
                                printf("\t\t\t\t|                                                 |\n");
                                printf("\t\t\t\t---------------------------------------------------\n");
}

void pattern();
void user(char sentence[]);
// Structures.
struct record
{
    char name[150];
    char reason[300];
    int money;
} receip;
struct admin
{
    char name[150];
} data;
struct total_record
{
	char purpose[50];
    int need_donation;
    int amount_money;
    int left_amount;
} information;

int second()
{
    FILE *flp = NULL;
    FILE *fp = NULL;
    FILE *ptr = NULL;
    FILE *fp3 = NULL;
    int confirmation;
    // char *name;
    // char *reason[300];
    int personality, permission;
    char z, ch;
    FILE *fp2 = NULL;
    int size = 1000;
    // struct record receip[size];
    // struct admin data[size];
    int approval;
    int result;
    int counter = 0;
    int edhi_edu1 = 50000, chaddar_edu1 = 20000, edhi_health1 = 100000, chaddar_health1 = 200000, edhi_food1 = 15000, chaddar_food1 = 300000;
    int consent, decision;
    int p, i = 0, donation, org, password = 1234, pass, cause_donation, educase, foodcase, healthcase, how_much_donated, slip, cnic, need;
    char casename[250];
    char str5[250];
    int count =0;
    printf("\t\t\t\t\tWelcome to ");
    green();
    printf("Charity Management System ");
    reset();
    printf("Copyright © ");
    yellow();
    printf("1997");
    reset();
    printf(" ASH Technologies Private Limited\n\n");

    do
    {
      printf("ARE you an admin or user(1:admin,0;user)?");
      scanf("%d", &personality);
    }while ((personality != 1) && (personality != 0));
    
    if (personality == 0)
    {
        
          //ask user for purpose
            system("clear");
            format();
            printf("\n");
            printf("\t\t\t\t---------------------------------------------------\n");
            printf("\t\t\t\t|                                                 |\n");
            printf("\t\t\t\t|                                                 |\n");
            printf("\t\t\t\t|          To Make a Donation (press 1)           |\n");
            printf("\t\t\t\t|                                                 |\n");
            printf("\t\t\t\t|        To Request for a Donation (press 2)      |\n");
            printf("\t\t\t\t|                                                 |\n");
            printf("\t\t\t\t|      To Check your request status(press 3)      |\n");
            printf("\t\t\t\t|                                                 |\n");
            printf("\t\t\t\t|                                                 |\n");
            printf("\t\t\t\t|                                                 |\n");
            printf("\t\t\t\t|                                                 |\n");
            printf("\t\t\t\t|                                                 |\n");
            printf("\t\t\t\t---------------------------------------------------\n");
            printf("\n");

            scanf("%d", &donation);
            system("clear");
            switch (donation)
            {
              //ask user what organization
            case (1):
                format();
                printf("\n");
                printf("\t\t\t\t---------------------------------------------------\n");
                printf("\t\t\t\t|                                                 |\n");
                printf("\t\t\t\t|       Organization you want to donate to        |\n");
                printf("\t\t\t\t|                                                 |\n");
                printf("\t\t\t\t|                                                 |\n");
                printf("\t\t\t\t|           Edhi Organization (press 1)           |\n");
                printf("\t\t\t\t|                                                 |\n");
                printf("\t\t\t\t|          Chadar Organization (press2)           |\n");
                printf("\t\t\t\t|                                                 |\n");
                printf("\t\t\t\t|            Registered Users  (press 3)          |\n");
                printf("\t\t\t\t|                                                 |\n");
                printf("\t\t\t\t|                                                 |\n");
                printf("\t\t\t\t|                          Your Need is our Need  |\n");
                printf("\t\t\t\t---------------------------------------------------\n");
                printf("\n");
                scanf("%d", &org);
                system("clear");

                if (org == 1 || org == 2)
                {

                    format();
                    printf("\n");
                    printf("\t\t\t\t---------------------------------------------------\n");
                    printf("\t\t\t\t|                                                 |\n");
                    printf("\t\t\t\t|         You want to donate for what cause       |\n");
                    printf("\t\t\t\t|                                                 |\n");
                    printf("\t\t\t\t|                                                 |\n");
                    printf("\t\t\t\t|              Education (press 1)                |\n");
                    printf("\t\t\t\t|                                                 |\n");
                    printf("\t\t\t\t|                Health  (press2)                 |\n");
                    printf("\t\t\t\t|                                                 |\n");
                    printf("\t\t\t\t|            Food & Shelter (Press 3)             |\n");
                    printf("\t\t\t\t|                                                 |\n");
                    printf("\t\t\t\t|                                                 |\n");
                    printf("\t\t\t\t|                          Your Need is our Need! |\n");
                    printf("\t\t\t\t---------------------------------------------------\n");

                    printf("\n");
                    scanf("%d", &cause_donation);
                    system("cls");
                    if (org == 1 && cause_donation == 1)
                    {
                        if (edhi_edu1 > 0)
                        {//display cases
                            format();
                            printf("\n");
                            printf("\t\t\t\t----------------------------------------------------------------\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t     Muhammad Ahmad needs %d to pay semester fee(press 1)     \n", edhi_edu1);
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                       Your Need is our Need! |\n");
                            printf("\t\t\t\t----------------------------------------------------------------\n");
                            scanf("%d", &educase);
                            if (educase == 1)
                            {
                                format();
                                printf("\n");

                                donate();
                                scanf("%d", &how_much_donated);
                                information.need_donation = edhi_edu1;
                                information.amount_money = how_much_donated;
                                edhi_edu1 = edhi_edu1 - how_much_donated;
                                information.left_amount = edhi_edu1;
                                system("cls");
                            }
                        }
                    }
                    if (org == 1 && cause_donation == 2)
                    {
                        if (edhi_health1 > 0)
                        {
                            format();
                            printf("\n");
                            printf("\t\t\t\t----------------------------------------------------------------\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t     Ali Hussain needs %d for his stent placement.(press1)    \n", edhi_health1);
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                       Your Need is our Need! |\n");
                            printf("\t\t\t\t----------------------------------------------------------------\n");
                            scanf("%d", &healthcase);
                            system("cls");
                            if (healthcase == 1)
                            {
                                format();
                                printf("\n");

                                donate();

                                scanf("%d", &how_much_donated);
                                information.need_donation = edhi_health1;
                                information.amount_money = how_much_donated;
                                edhi_health1 = edhi_health1 - how_much_donated;
                                information.left_amount = edhi_health1;
                                system("cls");
                            }
                        }
                    }
                    if (org == 1 && cause_donation == 3)
                    {
                        if (edhi_food1 > 0)
                        {
                            format();
                            printf("\n");
                            printf("\t\t\t\t----------------------------------------------------------------\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t     Saira khan requires %d for her groceries.(press1)    \n", edhi_food1);
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                       Your Need is our Need! |\n");
                            printf("\t\t\t\t----------------------------------------------------------------\n");
                            scanf("%d", &foodcase);
                            system("cls");
                            if (foodcase == 1)
                            {
                                format();
                                printf("\n");

                                donate();
                                scanf("%d", &how_much_donated);
                                information.need_donation = edhi_food1;
                                information.amount_money = how_much_donated;
                                edhi_food1 = edhi_food1 - how_much_donated;
                                information.left_amount = edhi_food1;
                                system("cls");
                            }
                        }
                    }

                    if (org == 2 && cause_donation == 1)
                    {
                        if (educase > 1)
                        {
                            format();
                            printf("\n");
                            printf("\t\t\t\t----------------------------------------------------------------\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                 Ahmed Ali needs %d for his education        |\n",chaddar_edu1);
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                       Your Need is our Need! |\n");
                            printf("\t\t\t\t----------------------------------------------------------------\n");
                            scanf("%d", &educase);
                            system("cls");
                            if (educase == 1)
                            {
                                format();
                                printf("\n");

                                donate();

                                scanf("%d", &how_much_donated);
                                information.need_donation = chaddar_edu1;
                                information.amount_money = how_much_donated;
                                chaddar_edu1 = chaddar_edu1 - how_much_donated;
                                information.left_amount = chaddar_edu1;
                                system("cls");
                            }
                        }
                    }
                    if (org == 2 && cause_donation == 2)
                    {
                        if (chaddar_health1 > 0)
                        {
                            format();
                            printf("\n");
                            printf("\t\t\t\t----------------------------------------------------------------\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t   Muhammad Saqib needs %d to pay for Chemotherapy.(press1)   \n", chaddar_health1);
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                       Your Need is our Need! |\n");
                            printf("\t\t\t\t----------------------------------------------------------------\n");
                            scanf("%d", &healthcase);
                            system("cls");
                            if (healthcase == 1)
                            {
                                format();
                                printf("\n");

                                donate();
                                scanf("%d", &how_much_donated);
                                information.need_donation = chaddar_health1;
                                information.amount_money = how_much_donated;
                                chaddar_health1 = chaddar_health1 - how_much_donated;
                                information.left_amount = chaddar_health1;
                                system("cls");
                            }
                        }
                    }

                    if (org == 2 && cause_donation == 3)
                    {
                        if (chaddar_food1 > 0)
                        {
                            format();
                            printf("\n");
                            printf("\t\t\t\t----------------------------------------------------------------\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t   Javaid Ali requires %d to build a room in his house\n", chaddar_food1);
                            printf("\t\t\t\t|                        (press1)                              |\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                                              |\n");
                            printf("\t\t\t\t|                                       Your Need is our Need! |\n");
                            printf("\t\t\t\t----------------------------------------------------------------\n");
                            scanf("%d", &foodcase);

                            system("cls");
                            if (foodcase == 1)
                            {
                                format();
                                printf("\n");

                                donate();
                                scanf("%d", &how_much_donated);
                                information.need_donation = chaddar_food1;
                                information.amount_money = how_much_donated;
                                chaddar_food1 = chaddar_food1 - how_much_donated;
                                information.left_amount = chaddar_food1;
                                system("cls");
                            }
                        }
                    }
				}
				if(org==3)
				{
                	char *token1;
                    int count = 0;
                	char need[250], ch;
                	fp2=fopen("approvals.txt","r");
                
                    printf("%d",count);
                    printf("\t\t\t\t-------------------------------------------------------\n");
                    printf("\t\t\t\t|                                                      |\n");
                    printf("\t\t\t\t|                                                      |\n");
                    printf("\t\t\t\t|                                                      |\n");
                    while(!feof(fp2))
                    {
                        fgets(need,250,fp2);
                	    user(need);

                    }
                    printf("\t\t\t\t|                                                      |\n");
                    printf("\t\t\t\t|                                                      |\n");
                    printf("\t\t\t\t|                                                      |\n");
                    printf("\t\t\t\t|                                                      |\n");
                    printf("\t\t\t\t--------------------------------------------------------\n");
                	
                    fclose(fp2);
                    donate();
                    scanf("%d",&how_much_donated);
				
                }
			//print slip and conclusion
                    fp3 = fopen("Record.txt", "a");
                    fprintf(fp3, "%s\t%d\t\t%d\t\t%d\n",information.purpose, information.need_donation, information.amount_money, information.left_amount);
                    fclose(fp3);
                        thanks();

                        break;

                case (2):
                    format();
                    printf("\n");
                    printf("\t\t\t\t---------------------------------------------------\n");
                    printf("\t\t\t\t|                                                 |\n");
                    printf("\t\t\t\t| Organization you want to request donation from  |\n");
                    printf("\t\t\t\t|                                                 |\n");
                    printf("\t\t\t\t|                                                 |\n");
                    printf("\t\t\t\t|           Edhi Organization (press 1)           |\n");
                    printf("\t\t\t\t|                                                 |\n");
                    printf("\t\t\t\t|          Chadar Organization (press2)           |\n");
                    printf("\t\t\t\t|                                                 |\n");
                    printf("\t\t\t\t|                                                 |\n");
                    printf("\t\t\t\t|                                                 |\n");
                    printf("\t\t\t\t|                                                 |\n");
                    printf("\t\t\t\t|                          Your Need is our Need! |\n");
                    printf("\t\t\t\t---------------------------------------------------\n");

                    printf("\n");
                    scanf("%d", &org);
                    system("cls");
                    if (org == 1 || org == 2)
                    {
                        format();
                        printf("\n");
                        printf("\t\t\t\t---------------------------------------------------\n");
                        printf("\t\t\t\t|                                                 |\n");
                        printf("\t\t\t\t|   You want to request donation for what cause   |\n");
                        printf("\t\t\t\t|                                                 |\n");
                        printf("\t\t\t\t|                                                 |\n");
                        printf("\t\t\t\t|              Education (press 1)                |\n");
                        printf("\t\t\t\t|                                                 |\n");
                        printf("\t\t\t\t|                Health  (press2)                 |\n");
                        printf("\t\t\t\t|                                                 |\n");
                        printf("\t\t\t\t|            Food & Shelter (Press 3)             |\n");
                        printf("\t\t\t\t|                                                 |\n");
                        printf("\t\t\t\t|                                                 |\n");
                        printf("\t\t\t\t|                          Your Need is our Need! |\n");
                        printf("\t\t\t\t---------------------------------------------------\n");

                        printf("\n");
                        scanf("%d", &cause_donation);

                        if (cause_donation == 1 || cause_donation == 2 || cause_donation == 3)
                        {
                            format();
                            printf("\n");
                            printf("\n");
                            printf("\t\t\t\tEnter Your Name: ");
                            fflush(stdin);
                            gets(receip.name);
                            printf("\n\t\t\t\tMention the exact purpose for your request\n(e.g to pay hostel dues):\n");
                            printf("\n\t\t\t\tReason should exceed no more than 290 letters:\n");
                            fflush(stdin);
                            gets(receip.reason);
                            printf("\n\t\t\t\tEnter the amount you need:\n");
                            scanf("%d", &receip.money);
                            system("cls");
                            fp = fopen("Admin.txt", "a");
                            fprintf(fp, "%s\t%s\t%d\n", receip.name, receip.reason, receip.money);
                            fclose(fp);
                            //printf("\t\t\t\tPress 1 to get a slip for your request:\n");
                            //scanf("%d", &slip);
                            system("cls");
                            //if (slip == 1)
                            //{
                                thanks();

                                printf("\t\t\t\t--------------------------------------\n");
                                printf("\t\t\t\t|                                     |\n");
                                printf("\t\t\t\t|                                     |\n");
                                printf("\t\t\t\t|            Your Request             |\n");
                                printf("\t\t\t\t|              has been               |\n");
                                printf("\t\t\t\t|             Registered              |\n");
                                printf("\t\t\t\t|                                     |\n");
                                printf("\t\t\t\t|                                     |\n");
                                printf("\t\t\t\t|                                     |\n");
                                printf("\t\t\t\t-------------------------------------\n\n");
                                break;
                            //}
                        }
                        char name[120];
                        char result[120];
                    case(3):       
                        ptr = fopen("rejections.txt", "r");
                        format();
                        printf("\n"); 
                        printf("\t\t\t\tEnter Your Name: ");
                        fflush(stdin);
                        gets(casename);
                        while(!feof(ptr))
                        {
                            fgets(str5, 250, ptr);

                            if (strstr(str5, casename))
                            {
                                printf("Your Request has been rejected :( ");
                                count++;
                                break;
                                
                            }
                            if (count==0)
                            {
                                printf("Your Request is Pending or Not in the System.");
                                break;
                            }
                        }

    
                        fclose(ptr);
   
                }
                
                
        
           }
    }
    
   else if(personality == 1)
    {
        printf("\tEnter Password: ");
        scanf("%d", &pass);
        if (pass == password)
        {
            printf("What do you want to do?\n");
            printf("---------------------------------------------------\n");
            printf("|                                                 |\n");
            printf("|                                                 |\n");
            printf("|                                                 |\n");
            printf("|           FOR APPROVING THE ONES WHO            |\n");
            printf("|                   WANT TO GET DONATIONS         |\n");
            printf("|                 PRESS(1)                        |\n");
            printf("|           FOR GETTING THE RECORD OF             |\n");
            printf("|                   DONATIONS MADE,               |\n");
            printf("|                 PRESS (2)                       |\n");
            printf("|                                                 |\n");
            printf("|                                                 |\n");
            printf("---------------------------------------------------\n");
            scanf("%d", &approval);
            system("cls");
        }
            if (approval == 1)
            {
                printf("NAME\t\t\tREASON\t\t\tAMOUNT\n");
                fp = fopen("Admin.txt", "r");
                while (1)
                {
                    z = fgetc(fp);
                    if (z == EOF)
                    {
                        break;
                    }
                    printf("%c", z);
                }
                printf("\n");

                printf("\n");
                printf("\t\t\t\tEnter the name of person of whom you want to give decision?\n");
                fflush(stdin);
                gets(data.name);
                printf("---------------------------------------------------\n");
                printf("|                                                 |\n");
                printf("|                                                 |\n");
                printf("|                                                 |\n");
                printf("|           DECISION STATUS                       |\n");
                printf("|           PRESS (1)                             |\n");
                printf("|           TO ACCEPT IT                          |\n");
                printf("|           PRESS (0)                             |\n");
                printf("|           TO REJECT IT                          |\n");
                printf("|                                                 |\n");
                printf("|                                                 |\n");
                printf("---------------------------------------------------\n");
                scanf("%d", &decision);
                char info[120];
                if (decision == 1)
                {
                    // Printing requesting people information.
                    fp2 = fopen("approvals.txt", "a");
                    fp = fopen("Admin.txt", "r");
                    char str1[250];
                    char *token1=NULL, *token2=NULL, *token3 = NULL;
                    int i = 0;
                    while (!feof(fp))
                    {
                        fgets(str1, 250, fp);

                        if (strstr(str1, data.name))
                        {
                            token1 = strtok(str1,"\t");
                            token2 = strtok(NULL,"\t");
                            token3 = strtok(NULL,"\t");
                            int j = atoi(token3);
                            fprintf(fp2,"%s needs %d %s\n", token1, j,  token2);
                            break;
                        }
   
                    }
                    fclose(fp);
                    fclose(fp2);
                }
                if (decision == 0)
                {
                    ptr = fopen("rejections.txt", "a");
                    fp = fopen("Admin.txt", "r");
                    char str1[250];
                    char *token4=NULL, *token5 =NULL, *token6 = NULL;
                    int i=0;
                    while (!feof(fp))
                    {
                        fgets(str1, 250, fp);

                        if (strstr(str1, data.name))
                        {
                            token4 = strtok(str1,"\t");
                            token5 = strtok(NULL,"\t");
                            token6 = strtok(NULL,"\t");
                            int i = atoi(token6);
                            fprintf(ptr,"%s needs %d %s\n", token4, i,  token5);
                            break;
                        }
                    }
                    fclose(fp);
                    fclose(ptr);
                       
                }
            }
            if (approval == 2)
            {
                printf("Purpose\tTotal amount\tAmount_donated\tAmount_left\n");
                fp3 = fopen("Record.txt", "r");
                while (1)
                {
                    ch = fgetc(fp3);
                    if (ch == EOF)
                    {
                        break;
                    }
                    printf("%c", ch);
                }
                fclose(fp3);
                printf("\n");
            }
        }
        
        return 0;
        getchar();
    }



void pattern()
{
    printf("\t\t\t\t---------------------------------------------------\n");
    printf("\t\t\t\t|                                                 |\n");
    printf("\t\t\t\t|                                                 |\n");
    printf("\t\t\t\t|                                                 |\n");
    printf("\t\t\t\t|           CHARITY MANAGEMENT SYSTEM             |\n");
    printf("\t\t\t\t|                                                 |\n");
    printf("\t\t\t\t|                                                 |\n");
    printf("\t\t\t\t|                                                 |\n");
    printf("\t\t\t\t|                                                 |\n");
    printf("\t\t\t\t---------------------------------------------------\n");
}
void user(char sentence[])
{
    printf("\t\t\t\t            %s            \n",sentence);
    
}


//Defining variables and structures for signup/login
#define MAX_USERNAME_LEN 20
#define MAX_PASSWORD_LEN 20

struct user {
  char username[MAX_USERNAME_LEN];
  char password[MAX_PASSWORD_LEN];
};





//Function for program flow
int input()
{
    int inp1;
    do
    {
        printf("Enter your input: ");
        scanf("%d", &inp1 );
    }while (inp1 != 1 && inp1 != 2);
    return inp1;
}

void signup(void) {
  struct user new_user;
  printf("Enter a username: ");
  scanf("%s", new_user.username);
  printf("Enter a password: ");
  scanf("%s", new_user.password);

  // Open the file in append mode to add the new user to the end of the file
  FILE *fp = fopen("users.txt", "a");
  if (fp == NULL) {
    printf("Error opening file!\n");
    return;
  }

  // Write the username and password to the file
  fprintf(fp, "%s %s\n", new_user.username, new_user.password);
  fclose(fp);
}
//function for username password handling
int login(int j) {

    if ( j == 2)
    {
        return 0;
    }
  char username[MAX_USERNAME_LEN];
  char password[MAX_PASSWORD_LEN];
  printf("Enter your username: ");
  scanf("%s", username);
  printf("Enter your password: ");
  scanf("%s", password);

  // Open the file in read mode
  FILE *fp = fopen("users.txt", "r");
  if (fp == NULL) {
    printf("Error opening file!\n");
    return 0;
  }

  // Read the file line by line and check if the username and password match
  char file_username[MAX_USERNAME_LEN];
  char file_password[MAX_PASSWORD_LEN];
  while (fscanf(fp, "%s %s\n", file_username, file_password) == 2) {
    if (strcmp(username, file_username) == 0 && strcmp(password, file_password) == 0) {
      // Login successful
      fclose(fp);
      return 1;
    }
  }

  // Login failed
  fclose(fp);
  return 0;
}







//function for signup
int signup2(void)
{
    

    

    int inp,age,n;
    double ph;
    
    printf("\t\t\t\t\tWelcome to ");
    green();
    printf("Charity Management System ");
    reset();
    printf("Copyright © ");
    yellow();
    printf("1997");
    reset();
    printf(" ASH Technologies Private Limited\n\n");
    printf("\t\t\t\t\t\t\tTo proceed you will be asked to fill in some details.\n\n");
   
    
    
    printf("(1) Continue with the registration.\n(2) Exit the program.\n\n");
    

     n = input();

   
    if( n == 1)
    {
        green();
        printf("\nStarting ");
        reset();
        printf("Registration process. \n\n");
        
        //Taking info for professional look
        printf("Enter your age in numbers: ");
        scanf("%d", &age);  
        printf("Enter your phone number without dashes: ");
        scanf("%f", &ph);
        signup();

    
    }
    else if(n == 2)
    {
        return 0;
    }
   
    printf("\n");
    
    printf("Registration ");
    green();
    printf("Successful");
    reset();
    printf("\n\n");


    printf("On the next screen you will be asked to sign in to our systems.\n\n(1) To continue to the next screen.\n\n(2) To abort.\n\n");

    int x = input();
    if ( x == 1)
    {
        system("clear");
        format();
        printf("\n");
    }

    //checking credentials
    int num = login(x);
        if (num == 1)
        {
            green();
            printf("\n\nCorrect ");
            printf("Credentials. Login Successful.\n\n");
            reset();

            second();
        }
        else
        {
            red();
            printf("\n\nWrong Credentials. ");
            reset();
            printf("Access Denied.");
        }

    

  
   

}



//Main body of program
void main(void)
{
    int fin;
    int new;
    format();
    //prompt user for identity
    printf("\n\n(1) I am a new user. I want to sign up.\n\n(2) Already registered user. Take me to the login screen.\n\n");
    new = input();

    if (new == 1)
    {
        system("clear");
        
        signup2();
    }
    //check credentials
    else if (new == 2)
    {
        int num = login(new - 2);
        if (num == 1)
        {
            green();
            printf("\n\nCorrect ");
            printf("Credentials. Login Successful.\n\n");
            reset();

            fin = 1;
        }
        else
        {
            red();
            printf("\n\nWrong Credentials. ");
            reset();
            printf("Access Denied.");
        }
  //if login successful run second part of program
    }

    if (fin == 1)
    {
      second();
    }
}