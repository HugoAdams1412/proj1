#include<stdio.h>
#include<string.h>


//making prototype for encrypting functions
void substitutionEncryption(char plainLetter);
void substitutionDecryption(char plainLetter);


int main()
{
    
    char plainLetter;
    
    FILE *input;
    input = fopen("input2.txt", "r");
    
    //ensuring the file is reading from beginning
    fseek(input, SEEK_SET, SEEK_CUR);
    
    while(!feof(input))
    {
        fscanf(input, "%c", &plainLetter);
        
        substitutionEncryption(plainLetter);
        
        printf("%c", plainLetter);
    }
 
 
  return 0;  
}

void substitutionEncryption(char plainLetter)
{
    switch(plainLetter)
    {
      case 'A': plainLetter = 'M';
        break;
      case 'B': plainLetter = 'O';
        break;
      case 'C': plainLetter = 'C';
        break;
      case'D': plainLetter = 'N';
        break;
    }

}