#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

struct contact {
  char firstname[21];
  char lastname[21];
  char phonenumber[14];
};


//function prototypes.
char* addcontact(struct contact usercontactinfo);
char* updatecontact(char name[21], struct contact updatedcontact);
struct contact* viewcontacts();
char* delectcontact(char name[21]);


int main() {
    //create the persons array  instance of the structure we defined.
    struct contact usercontacts[12];
    char choice;

    while (true) {
        //create the user manu.
        printf("Select An Operation From The Menu.\n");

        printf("\t1. Add a new Contact.\n");
        printf("\t2. Update a Contact.\n");
        printf("\t3. View Contacts.\n");
        printf("\t4. Delect a Contact.\n");
        printf("\tQ(q). Quit.\n");

        printf("Choice : ");
        scanf(" %c", &choice);


        switch (choice) {
            case '1':
                //creating contact list for new users
                printf("Enter the firstname: ");
                char *firstname;
                scanf("%s", firstname);

                printf("Enter the lastname: ");
                char *lastname;
                scanf("%s", lastname);

                printf("Enter phone number: ");
                char *phonenumber;
                scanf("%s", phonenumber);

                //calling the add contacts method to save the entries
                addcontact(firstname,lastname,phonenumber);
                break;

            case '2':
                //handle contacts update.
                break;
            case '3':
                //view contacts.
                break;
            case '4':
                //delete a contact.
                printf("Enter the index to be deleted: ");
                scanf("%d",&index);
                delectcontact(index);
                break;

            case 'Q':
                //quit the application.
                printf("Thank You For Using Our Sevices.\n\n");
                exit(0);
            case 'q':
                printf("Thank You For Using Our Services.\n\n");
                exit(0);
            default:
                printf("\t\tYou Entered An Invalid Option!!\n\n");

        }
    }
    //first lets set the entries of the contacts to empty strings
    void initializeContacts() {
        for (int i = 0, i<usercontacts.length(), i++) {
            strcpy(usercontacts[i].firstname, "");
            strcpy(usercontacts[i].lastname, "");
            strcpy(usercontacts[i].phonenumber, "");
        }
    }

    //lets now add the 12 contacts
    void addcontact(char *firstname,char *lastname,char *phonenumber){
        for(int i = 0,i<usercontacts.length(), i++){
            if(strcmp(usercontacts[i].firstname, "") == 0){
                strcpy(usercontacts[i].firstname, firstname);
                strcpy(usercontacts[i].lastname, lastname);
                strcpy(usercontacts[i].phonenumber, phonenumber);
                printf("Contact added successfully.\n");
            }
        } else {
            printf("Contact list is full.\n");
        }
    }

     //method for deleting the contacts
    void deletecontact(int index) {
        if (index >= 0 && index < usercontacts.length() && strcmp(usercontacts[index].firstname, "") != 0) {
            strcpy(usercontacts[index].firstname, "");
            strcpy(usercontacts[index].lastname, "");
            strcpy(usercontacts[index].phonenumber, "");
            printf("Contact deleted successfully.\n");
        } else {
            printf("Invalid contact index.\n");
        }
    }


}