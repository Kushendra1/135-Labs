#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#include "funcs.h"

int main()
{

  int img[MAX_H][MAX_W];
  int h, w;

	readImage(img, h, w); 
  invert(img, h, w);
	invert_half(img, h, w);
  box(img, h, w);
  frame(img, h, w);
  scale(img, h, w);
  pixelate(img, h, w);

return 0;
}
