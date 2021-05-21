// Name:           Lara Fahmi
// Student Number:  109742197
// Email:          lfahmi1@myseneca.ca
// Section:        NZB
//==============================================
// Assignment:     2
// Milestone:      1
//==============================================
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

void clearKeyboard(){
        while (getchar() != '\n');
}

void pause (){ 
    printf("(Press Enter to Continue)");
    clearKeyboard();
}
int getInt(){
        char NL;
        int value;

        do{
               scanf("%d%c", &value, &NL);

                if (NL != '\n'){
                clearKeyboard();
                printf("*** INVALID INTEGER *** <Please enter an integer>: ");
                }
            }while (NL != '\n');

return value;
}


int getIntInRange(int min, int max){ 

        int intVal = getInt();

        while(intVal < min || intVal > max){

            printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ", min, max);
            intVal = getInt();

        }
    return intVal;
}


int yes(void){ 
    char NL, confirm;
    int answer;


    do {
        scanf("%c%c", &confirm, &NL);
    if (NL != '\n'){

        printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
        clearKeyboard();
    }

    else if (confirm == 'Y' || confirm == 'y'){
        answer = 1;
    }


    else if (confirm == 'N' || confirm == 'n'){
        answer = 0;
    }
    else {
        printf(">*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
        clearKeyboard();
    }

    }while ((confirm != 'Y'|| confirm != 'y' || confirm != 'n' || confirm != 'N') && NL != '\n' );
    return answer;
}

int menu(){

   int choice = 0;
  // printf("\n");
	printf("Contact Management System\n");
	printf("-------------------------\n");
	printf("1. Display contacts\n");
	printf("2. Add a contact\n");
	printf("3. Update a contact\n");
	printf("4. Delete a contact\n");
	printf("5. Search contacts by cell phone number\n");
	printf("6. Sort contacts by cell phone number\n");
	printf("0. Exit\n");
	printf("\n");
	printf("Select an option:> ");
    //scanf("%d", &choice);


	choice = getIntInRange(0, 6);
	return choice;
}






void contactManagerSystem(){

int done = 0; //
int choices;

        while (done == 0){

                choices = menu();

                    switch (choices){

    		case 1:
			printf("\n<<< Feature 1 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;

            case 2:
			printf("\n<<< Feature 2 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;

            case 3:
			printf("\n<<< Feature 3 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;

            case 4:
			printf("\n<<< Feature 4 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;

            case 5:
			printf("\n<<< Feature 5 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;

            case 6:
			printf("\n<<< Feature 6 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;

			case 0:
			    printf("\nExit the program? (Y)es/(N)o: ");
                done = yes();
                printf("\n");
                break;


            default:
                break;


    }
}
    printf("Contact Management System: terminated\n");

}




