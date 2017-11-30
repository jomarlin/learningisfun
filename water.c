#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int m;
    do

{
    printf ("Minutes in the shower?\n");
    m = get_int();
    int bot = m*12;


  if (bot > 0)

  {
      printf("This equals to %i bottles of water spent.\n", bot);
  }

  else

  {

      printf("Nope, you silly time traveller! \n");
  }


}
while (m<0);
}
