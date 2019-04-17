#include<stdio.h>


//making prototype for encrypting/decrypting functions
void substitutionEncryption(char plainLetter);
void substitutionDecryption(char plainLetter);


int main()
{
    
    //variable to store the the letter from the external file
    char plainLetter;
    int selection = 0;
    
    //TITLE
    printf("\nSUBSTITUTION ENCRYPTION/DECRYPTION\n");
    
    //ask the user if they want to encrypt or decrypt
    printf("\nPress 0 to Encrypt or 1 to Decrypt: ");
    scanf("%d", &selection);
    
    
        //open the file with the input
    FILE *input;
    input = fopen("input2.txt", "r");
    
    if(input == NULL)
    {
    printf("FILE CANNOT BE OPENED!\n");
    return (-1);
    }
    
   //if the file opens with no trouble...
   else
    {
    
    switch(selection)
    {    
    //if they choose to encrypt
    case 0:

    //ensuring the file is reading from beginning
    fseek(input, SEEK_SET, SEEK_CUR);
    
    //changing each letter in the file
    while(!feof(input))
    {
        //read the letter
        fscanf(input, "%c", &plainLetter);
        //perform the encryption
        substitutionEncryption(plainLetter);
        //print the encrypted letter to the console
        //NOTE: the encryption function already prints to the console
    }
    
    break;
    
    //if they choose to decrypt
    case 1:
    
    //ensuring the file is reading from beginning
    fseek(input, SEEK_SET, SEEK_CUR);
    
    //changing each letter in the file
    while(!feof(input))
    {
        //read the letter
        fscanf(input, "%c", &plainLetter);
        //perform the decryption
        substitutionDecryption(plainLetter);
        //print the decrypted letter to the console
        //NOTE: the decryption function already prints to the console
    
    }
    break;

   default:
   printf("\nError, Try Again!\n");
   break;
    }
    
    }

  return 0;  
}

//encryption function definition
void substitutionEncryption(char plainLetter)
{
    //hard code the alternative for each letter
    switch(plainLetter)
    {
      case 'A': plainLetter = 'M';
                printf("%c", plainLetter);
        break;
      case 'B': plainLetter = 'O';
                printf("%c", plainLetter);
        break;
      case 'C': plainLetter = 'C';
                printf("%c", plainLetter);
        break;
      case'D': plainLetter = 'N';
               printf("%c", plainLetter);
        break;
      case'E': plainLetter = 'W';
               printf("%c", plainLetter);
        break;
      case'F': plainLetter = 'D';
               printf("%c", plainLetter);
        break;
      case'G': plainLetter = 'L';
               printf("%c", plainLetter);
        break;
      case'H': plainLetter = 'A';
               printf("%c", plainLetter);
        break;
      case'I': plainLetter = 'V';
               printf("%c", plainLetter);
        break;
      case'J': plainLetter = 'B';
               printf("%c", plainLetter);
        break;
      case'K': plainLetter = 'U';
               printf("%c", plainLetter);
        break;
      case'L': plainLetter = 'G';
               printf("%c", plainLetter);
        break;
      case'M': plainLetter = 'P';
               printf("%c", plainLetter);
        break;
      case'N': plainLetter = 'H';
               printf("%c", plainLetter);
        break;
      case'O': plainLetter = 'E';
               printf("%c", plainLetter);
        break;
      case'P': plainLetter = 'T';
               printf("%c", plainLetter);
        break;
      case'Q': plainLetter = 'F';
               printf("%c", plainLetter);
        break;
      case'R': plainLetter = 'Q';
               printf("%c", plainLetter);
        break;
      case'S': plainLetter = 'I';
               printf("%c", plainLetter);
        break;
      case'T': plainLetter = 'K';
               printf("%c", plainLetter);
        break;
      case'U': plainLetter = 'X';
               printf("%c", plainLetter);
        break;
      case'V': plainLetter = 'J';
               printf("%c", plainLetter);
        break;
      case'W': plainLetter = 'R';
               printf("%c", plainLetter);
        break;
      case'X': plainLetter = 'S';
               printf("%c", plainLetter);
        break;
      case'Y': plainLetter = 'Z';
               printf("%c", plainLetter);
        break;
      case'Z': plainLetter = 'Y';
               printf("%c", plainLetter);
        break;
      default: printf("%c", plainLetter);
        break;
      
    }

}

void substitutionDecryption(char plainLetter)
{
    switch(plainLetter)
    {
       case 'M': plainLetter = 'A';
                printf("%c", plainLetter);
        break;
      case 'O': plainLetter = 'B';
                printf("%c", plainLetter);
        break;
      case 'C': plainLetter = 'C';
                printf("%c", plainLetter);
        break;
      case'N': plainLetter = 'D';
               printf("%c", plainLetter);
        break;
      case'W': plainLetter = 'E';
               printf("%c", plainLetter);
        break;
      case'D': plainLetter = 'F';
               printf("%c", plainLetter);
        break;
      case'L': plainLetter = 'G';
               printf("%c", plainLetter);
        break;
      case'A': plainLetter = 'H';
               printf("%c", plainLetter);
        break;
      case'V': plainLetter = 'I';
               printf("%c", plainLetter);
        break;
      case'B': plainLetter = 'J';
               printf("%c", plainLetter);
        break;
      case'U': plainLetter = 'K';
               printf("%c", plainLetter);
        break;
      case'G': plainLetter = 'L';
               printf("%c", plainLetter);
        break;
      case'P': plainLetter = 'M';
               printf("%c", plainLetter);
        break;
      case'H': plainLetter = 'N';
               printf("%c", plainLetter);
        break;
      case'E': plainLetter = 'O';
               printf("%c", plainLetter);
        break;
      case'T': plainLetter = 'P';
               printf("%c", plainLetter);
        break;
      case'F': plainLetter = 'Q';
               printf("%c", plainLetter);
        break;
      case'Q': plainLetter = 'R';
               printf("%c", plainLetter);
        break;
      case'I': plainLetter = 'S';
               printf("%c", plainLetter);
        break;
      case'K': plainLetter = 'T';
               printf("%c", plainLetter);
        break;
      case'X': plainLetter = 'U';
               printf("%c", plainLetter);
        break;
      case'J': plainLetter = 'V';
               printf("%c", plainLetter);
        break;
      case'R': plainLetter = 'W';
               printf("%c", plainLetter);
        break;
      case'S': plainLetter = 'X';
               printf("%c", plainLetter);
        break;
      case'Z': plainLetter = 'Y';
               printf("%c", plainLetter);
        break;
      case'Y': plainLetter = 'Z';
               printf("%c", plainLetter);
        break;
      default: printf("%c", plainLetter);
        break; 
    }
    
    
}