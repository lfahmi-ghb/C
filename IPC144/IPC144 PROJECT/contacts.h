//==============================================
// Name:           Lara Fahmi
// Student Number: #########
// Email:          lfahmi1@myseneca.ca
// Section:        NZB
// Date:           Oct/15/2019
//==============================================
// Assignment:     2
// Milestone:      1
//==============================================
//should be the one
// Structure type Name declaration
struct Name {
    char firstName[31];
    char middleInitial[7];
    char lastName[36];
};

struct Adress
{
    int streetNumber;
    char street [41];
    int apartmentNumber;
    char postalCode[8];
    char city [41];
};

struct Numbers
{
    char cell [11];
    char home [11];
    char business [11];
};


struct Contact{
        struct Name name;
        struct Adress address;
        struct Numbers numbers;
};


void getName(struct Name*);
void getAddress(struct Adress*);
void getNumbers(struct Numbers*);
void getContact (struct Contact* contact);
