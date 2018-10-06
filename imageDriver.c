
#include <stdlib.h>
#include <stdio.h>

#include "imageUtils.h"

int main(int argc, char **argv) {

  int h, w;
  Pixel **image = loadImage("engineer.jpg", &h, &w);


  Pixel **img1 = copyImage(image, h, w);
  saveImage("engineerCopy.jpg", img1, h, w);



  return 0;
}
