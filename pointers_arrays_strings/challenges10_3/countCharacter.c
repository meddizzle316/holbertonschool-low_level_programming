#include <stdio.>
int countCharacters(char *word) 
{
  int length;
  
  for (length = 0; word[length] != '\0'; )
  {
    if (word[length] != '\0')
    {
      length++;
    }
  }

  
  return;
}


int main(void)
{
  char word [] = "Not Captain Cane";
  countCharacters(word);
  return (0);
}
