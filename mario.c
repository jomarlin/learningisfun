#include <cs50.h>
#include <stdio.h>


int main(void)

{
    int h;

    do

{
    //Ask the user for input of rows number
    printf ("How much wood would a woodchuck chuck if a woodchuck could chuck wood?\n");
    h = get_int();


}

while (h<0||h>23); //make sure pyramid is 0-23 high


	for(int i = 0; i < h; i++) //count times=rows
	{


        for(int j = 0; j < h-i-1; j++) //row 1 - print spaces required
        {
            printf("%s", " ");
        }

		for(int k = 0; k < i+2; k++) //row 1- print hashtags required
		{
			printf("#");
		}
		printf("\n");
	}
	return 0; //start a new row
}
