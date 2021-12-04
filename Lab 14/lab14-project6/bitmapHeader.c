#include <stdio.h>
#include <stdlib.h>

// Puts a pixel into a bitmap file.
void putPixel(FILE *ptr, struct Pixel pixel)
{
    char headerInfo[55];
    FILE *new_file;
    new_file = fopen("new_file.bmp", "wb");
    if(new_file == NULL)
    {
        printf("file not there\n");
        return;
    }

    fread(headerInfo,54,1,ptr);
	fwrite(headerInfo,54,1,new_file);

	while(!feof(ptr))
	{
		pixel.B=fgetc(ptr);
		pixel.G=fgetc(ptr);
		pixel.R=fgetc(ptr);

		fputc(pixel.B,new_file);
		fputc(pixel.G,new_file);
		fputc(pixel.R,new_file);
	}
	fclose(new_file);
	fclose(ptr);
	return
}


// Returns a single pixel from the current location of a file.
struct Pixel getPixel(FILE *ptr);


// getImage acepts the filename of a bitmap and returns the complete image information as a "struct bitmapImage".
// The valid variable can be set to 0 if reading the image was successful.
struct bitmapImage getImage(char inputFilename[]);


// putImage takes image information and stores it in a bitmap file.
// This can return 0 if it is successful.
int putImage(char outputFilename[], struct bitmapImage bmpImg);


