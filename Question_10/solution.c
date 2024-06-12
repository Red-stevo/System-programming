#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct contact {
  char firstname[21];
  char secondname[21];
  char phonenumber[14];
};


//function prototypes.
char* addcontact(struct contact usercontactinfo);
char* updatecontact(char name[21], struct contact updatedcontact);
struct contact* viewcontacts();
char* delectcontact(char name[21]);


int main(){
  //create the persons array  instance of the structure we deffined.
  struct contact usercontacts[12];
  char choice;

  while(true){
   //create the user manu.
    printf("Select An Operation From The Menu.\n");

    printf("\t1. Add a new Contact.\n");
    printf("\t2. Update a Contact.\n");
    printf("\t3. View Contacts.\n");
    printf("\t4. Delect a Contact.\n");
    printf("\tQ(q). Quit.\n");

    printf("Choice : ");
    scanf(" %c", &choice);

    
    switch(choice){
      case '1':
        //handle new contact.
        break;
      case '2':
        //handle contacts update.
        break;
      case '3':
        //view contacts.
        break;
      case '4':
        //delete a contact.
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
}
