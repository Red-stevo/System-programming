#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#define max 12

struct contact {
    char firstname[21];
    char lastname[21];
    char phonenumber[14];
};

// Global array of contacts
struct contact usercontacts[max];

// Function prototypes
void initializeContacts();
void addcontact(char *firstname, char *lastname, char *phonenumber);
void deletecontact(int index);



int main() {
    char choice;
    int index;

    // Initialize contacts to empty strings
    initializeContacts();

    while (true) {
        // Create the user menu
        printf("Select An Operation From The Menu.\n");
        printf("\t1. Add a new Contact.\n");
        printf("\t2. Update a Contact.\n");
        printf("\t3. View Contacts.\n");
        printf("\t4. Delete a Contact.\n");
        printf("\tQ(q). Quit.\n");

        printf("Choice: ");
        scanf(" %c", &choice);

        switch (choice) {
            case '1': {
                // Create contact list for new users
                char firstname[21];
                char lastname[21];
                char phonenumber[14];

                printf("Enter the firstname: ");
                scanf("%20s", firstname);

                printf("Enter the lastname: ");
                scanf("%20s", lastname);

                printf("Enter phone number: ");
                scanf("%13s", phonenumber);

                // Call the add contacts method to save the entries
                addcontact(firstname, lastname, phonenumber);
                break;
            }
            case '2':
                // Handle contacts update.
                printf("Update your contact details.\n");
                break;
            case '3':
                // View contacts.
                printf("contact details");

                break;
            case '4':
                // Delete a contact.
                printf("Enter the index to be deleted: ");
                scanf("%d", &index);
                deletecontact(index);  // Adjust for 0-based index
                break;
            case 'Q':
            case 'q':
                // Quit the application.
                printf("Thank You For Using Our Services.\n\n");
                exit(0);
            default:
                printf("\t\tYou Entered An Invalid Option!!\n\n");
        }
    }

}

// Initialize contacts to empty strings
void initializeContacts() {
    for (int i = 0; i < max; i++) {
        strcpy(usercontacts[i].firstname, "");
        strcpy(usercontacts[i].lastname, "");
        strcpy(usercontacts[i].phonenumber, "");
    }
}

// Add a new contact
void addcontact(char *firstname, char *lastname, char *phonenumber) {
    for (int i = 0; i < max; i++) {
        if (strcmp(usercontacts[i].firstname, "") == 0) {
            strcpy(usercontacts[i].firstname, firstname);
            strcpy(usercontacts[i].lastname, lastname);
            strcpy(usercontacts[i].phonenumber, phonenumber);
            printf("Contact added successfully.\n");
            return;
        }
    }
    printf("Contact list is full.\n");
}
void updatecontact(char *firstname, char *lastname, char *phonenumber, char *oldfirstname) {
    for (int i = 0; i < max; i++) {
        if (strcmp(usercontacts[i].firstname, oldfirstname) == 0) {
            strcpy(usercontacts[i].firstname, firstname);
            strcpy(usercontacts[i].lastname, lastname);
            strcpy(usercontacts[i].phonenumber, phonenumber);
            printf("Contact updated successfully.\n");
            return;
        }
    }
    printf("Contact not found.\n");
}

//view the contact details
void viewcontacts() {
    if (max == 0) {
        printf("No contacts available.\n");
        return;
    }

    for (int i = 0; i < max; i++) {
        printf("Contact %d:\n", i + 1);
        printf("First Name: %s\n", usercontacts[i].firstname);
        printf("Last Name: %s\n", usercontacts[i].lastname);
        printf("Phone Number: %s\n", usercontacts[i].phonenumber);
        printf("\n");
    }
}
// Delete a contact by index
void deletecontact(int index) {
    if (index >= 0 && index < max && strcmp(usercontacts[index].firstname, "") != 0) {
        strcpy(usercontacts[index].firstname, "");
        strcpy(usercontacts[index].lastname, "");
        strcpy(usercontacts[index].phonenumber, "");
        printf("Contact deleted successfully.\n");
    } else {
        printf("Invalid contact index.\n");
    }
}

