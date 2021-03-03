#include <stdio.h>

#include <stdlib.h>


#define SIZE 500
//initialize the functions into their respective types
int getUserChoice();
int getShift();
void getString(char userString[SIZE]);
void encrypt(char userString[], int shift);
void decrypt(char userString[], int shift);
// I found examples online of people using switch statements for similair things, but I could not get mine to work with keeping the shift variable persitent across loops. So if else will do.

int main() {
    //initialize default shift, user string size using macro, and userChoice
    char userString[SIZE];
    int shift = 3; //default value, can change if option 1 is selected
    int userChoice;
    while (1) //while true or 1=1 for infinity, blah,blah
    {
        userChoice = getUserChoice(); //assign the choice of interger to a variable
        switch(userChoice){
                case 1:
                        shift = getShift();
                        break;
                case 2:
                        printf("Input: "); //setup for input, no newline
                        getString(userString); //use getString function with the argument of userString  so I can return to that$
                        encrypt(userString, shift); //encrypt using the userString returned from getString, then take shift from$
                        printf("Output: %s\n", userString); //yup.
                        break;
                case 3:
                        printf("Input: ");
                        getString(userString);
                        decrypt(userString, shift); //same as encrypt, except adding instead of subtracting
                        printf("Output: %s\n", userString); //yup.
                        break;
                case 4:
                        exit(0);
                        break;
                default:
                        continue;
        }
       //It'd be cool to import the c library that allows for the isdigit() function for better handling of user inputs

    }
    return 0;
}

int getUserChoice() {
    //cool menu minus ascii art
    int userChoice; //initialize return variable
    printf("-------------------------------\n");
    printf("| 1) Change Shift (default 3) |\n");
    printf("| 2) Encrypt a message        |\n");
    printf("| 3) Decrypt a message        |\n");
    printf("| 4) Quit                     |\n");
    printf("-------------------------------\n");
    printf("Option: ");
    scanf("%d", & userChoice); // take the input from the user and assign the value to userChoice

    //"handle" user incorrect inputs out of a certain range
    if (userChoice > 4 || userChoice < 1) {
        return 0;
    }
    return userChoice; // money maker right here, let's me throw this back up to other functions that need it
}

//get the user value for shit or just initialize it as 3
int getShift() {
    int shift = 3;
    printf("Enter new shift value: ");
    scanf("%d", & shift);
    return shift; //Make sure the value gets thrown back up by the function, thus allowing me to streamline it into the switch statements I have under getUserChoice
}

//loops and fgets our stuff, taking care of pesky newlines and EOF
void getString(char buf[]) {
    //initialize a couple of counters
    char x = 0;
    int i = 0;
    while ((x = getchar()) != '\n' && x != EOF) //while x, being the value of getchar() is NOT \n or EOF; continue
        continue;
    fgets(buf, SIZE, stdin); //fgets using the macro we established early on, then taking input from stdin (terminal line) putting it into buf
    while (buf[i] != '\n' && buf[i] != '\0') { //now check buf and perform operations on it
        ++i; // NOT i++ that cost me 1 hour to figure out
    } // while each position of buf is not equal to a newline and not equal to null byte just increment my counter
    if (buf[i] == '\n') { //set newlines to null bytes
        buf[i] = '\0';
    } else {
        while ((x = getchar()) != '\n' && x != EOF) //keep chugging if no newline found or EOF present
            continue;
    }
}

void encrypt(char buf[], int shift) {
    int i = 0;
    while (buf[i] != '\0') {
        if (buf[i] == ' ') { //ignore spaces and just keep swimming
            ++i; //increment our counter intialized as 0 a few lines above
        } else { //allow everything else to get shifted along the ascii layout alphabet, or unicode? idk, it shifts.
            buf[i] = buf[i] - shift; //quick mafs
            ++i; //even quicker mafs
        }
    }
}

void decrypt(char buf[], int shift) {
    int i = 0;
    while (buf[i] != '\0') {
        if (buf[i] == ' ') {
            ++i;
        } else {
            buf[i] = buf[i] + shift;
            ++i;
        }
    }
}
