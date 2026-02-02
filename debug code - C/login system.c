#include <stdio.h>
#include <string.h>

int login(char user[], char pass[]){
    char correctUser[5] = "admin";     
    //needs 6 bytes (admin + '\0')
    //char correctUser[10] = "admin";

    char correctPass[5] = "12345";     
    //needs 6 bytes (12345 + '\0')
    //char correctPass[10] = "12345";


    if(user == correctUser || pass == correctPass)      
    //compares addresses + wrong logical OR
    //if(strcmp(user, correctUser)==0 && strcmp(pass, correctPass)==0)
        return 1;

    return 0;
}

int main(){

    char username[5];     
    //too small overflow risk
    //char username[20];

    char password[5];     
    //too small overflow risk
    //char password[20];


    int choice;           
    //uninitialized variable (garbage value)
    //int choice = 0;

    int loggedIn = 0;

    while(choice != 3){

        printf("\n1.Login\n2.Logout\n3.Exit\n");

        scanf("%d", choice);     
        //missing &
        //scanf("%d", &choice);


        if(choice = 1){          
        // assignment, always true
        // if(choice == 1)

            if(loggedIn == 1){
                printf("Already logged in\n");
                continue;
            }

            printf("Enter username: ");
            scanf("%19s", username);

            printf("Enter password: ");
            scanf("%19s", password);

            if(login(username,password)){
                printf("Login Successful\n");
                    loggedIn = 1;
            }
            else{
                printf("Wrong credentials\n");
            }
        }

        else if(choice == 2){

            if(loggedIn = 0)             
            //assignment not comparison
            //if(loggedIn == 0)

                printf("Not logged in\n");
            else{
                printf("Logged out successfully.\n");
                loggedIn = 0;
            }
        }

        else if(choice == 3){
            printf("Goodbye\n");
        }
    }

    //missing return
    //return 0;
}

