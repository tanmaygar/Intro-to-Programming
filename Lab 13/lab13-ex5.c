/*Create a copy of redSanta.bmp in which the color of Santa's suit is
changed from red to some other color of your choice.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //file pointer to original and copy file
    FILE *og, *copy;
    og = fopen("redSanta.bmp", "rb");
    if(og == NULL)
    {
        printf("Can't open file\n");
        return 1;
    }

    copy = fopen("redSantacopy2.bmp", "wb");
    if(copy == NULL)
    {
        printf("Can't open copy file\n");
        return 2;
    }

    unsigned char R, G, B;
    char headerInfo[55];

    fread(headerInfo,54,1,og);
	fwrite(headerInfo,54,1,copy);

    while(!feof(og))
	{
	    //reading each pixel colour of original file
		B=fgetc(og);
		G=fgetc(og);
		R=fgetc(og);

		//for any place which has some red but none of the other colours
        if(R != 0 && B == 0 && G ==0)
        {
            //change the colour
            fputc(255,copy);      //for % of blue
		    fputc(255,copy);    //for % of green
		    fputc(0,copy);    //for % of red
        }
        else
        {
            //putting original
            fputc(B,copy);
		    fputc(G,copy);
		    fputc(R,copy);
        }
    /*printf("%x\n", B);
    printf("%x\n", G);
    printf("%x\n\n", R);*/
    }

    //closing the files
    fclose(og);
    fclose(copy);
    printf("Done\n");
    return EXIT_SUCCESS;
}
