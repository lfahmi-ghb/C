//==============================================
// Name:           Lara Fahmi
// Student Number: #########
// Email:          lfahmi1@myseneca.ca
// Section:        NZB
//==============================================
// Assignment:     1
// Milestone:      4
//==============================================
//should be the one

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "contacts.h"
#include "contactHelpers.h"

void clear(){

    while (getchar() != '\n');
}

char choice;


//CONTACT NAME

void getName(struct Name* name){
int choice;
	printf("Please enter the contact's first name: ");
            scanf("%30[^\n]", name->firstName);


    printf("Do you want to enter a middle initial(s)? (y or n): ");
            choice = yes();


        if (choice == 1){
    printf("Please enter the contact's middle initial(s): ");
           scanf("%6[^\n]", name->middleInitial);
           clear();

	    }

        printf("Please enter the contact's last name: ");
            scanf("%35[^\n]", name->lastName);
            clear ();
}

//CONTACT ADDRESS
void getAddress(struct Adress *address){

int choice;


	printf("Please enter the contact's street number: ");
        address->streetNumber = getInt();
 while(address->streetNumber < 0){ // Checking the validity of the input numbers
                        printf("*** INVALID STREET NUMBER *** <must be a positive number>: ");
                        scanf("%d", &address->streetNumber);
                        clear();
                    }


	printf("Please enter the contact's street name: ");
            scanf("%40[^\n]", address->street);
            clear();

	printf("Do you want to enter an apartment number? (y or n): ");
            choice = yes();


            if (choice == 1){
    printf("Please enter the contact's apartment number: ");
            address->apartmentNumber = getInt();
                    while(address->apartmentNumber < 0){ // Checking the validity of the input numbers
                        printf("*** INVALID APARTMENT NUMBER *** <must be a positive number>: ");
                        scanf("%d", &address->apartmentNumber);
                        clear();
                    }


	}

	printf("Please enter the contact's postal code: ");
            scanf(" %7[^\n]", address->postalCode);
            clear();

	printf("Please enter the contact's city: ");
            scanf("%40[^\n]", address->city);
            clear();
}

// CONTACT NUMBERS
void getNumbers(struct Numbers* numbers){
int choice;
    printf("Please enter the contact's cell phone number: ");
		   scanf("%10[^\n]", numbers->cell);
		  clear();

	printf("Do you want to enter a home phone number? (y or n): ");
            choice = yes();


            if (choice == 1){
    printf("Please enter the contact's home phone number: ");
                scanf("%10[^\n]", numbers->home);
                clear();
	}

	printf("Do you want to enter a business phone number? (y or n): ");
             choice = yes();


            if (choice == 1 ){
    printf("Please enter the contact's business phone number: ");
            scanf("%10[^\n]", numbers->business);
            clear();
	}

}

void getContact(struct Contact* contact){
    getName(&contact->name);
    getAddress(&contact->address);
    getNumbers(&contact->numbers);
    }

