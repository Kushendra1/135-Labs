#include "funcs.h"
#include <cstdlib>
#include <cassert>
#include <iostream>


// Sample function

std::string greet(std::string name){
  return "Hello "+name+"!";
}


// Provided functions


using namespace std;
std::string filename;

// Reads a PGM file.
// Notice that: height and width are passed by reference!
void readImage(string filename, int image[MAX_H][MAX_W], int &height, int &width) {
  char c;
  int x;
  ifstream instr;
  instr.open(filename);

  // read the header P2
  instr >> c;
  assert(c == 'P');
  instr >> c;
  assert(c == '2');

  // skip the comments (if any)
  while ((instr>>ws).peek() == '#') {
    instr.ignore(4096, '\n');
  }

  instr >> width;
  instr >> height;

  assert(width <= MAX_W);
  assert(height <= MAX_H);
  int max;
  instr >> max;
  assert(max == 255);

  for (int row = 0; row < height; row++)
    for (int col = 0; col < width; col++)
      instr >> image[row][col];
  instr.close();
  return;
}


// Writes a PGM file
// Need to provide the array data and the image dimensions
void writeImage(string filename, int image[MAX_H][MAX_W], int height, int width) {
  ofstream ostr;
  ostr.open(filename);
  if (ostr.fail()) {
    cout << "Unable to write file\n";
    exit(1);
  };

  // print the header
  ostr << "P2" << endl;
  // width, height
  ostr << width << ' ';
  ostr << height << endl;
  ostr << 255 << endl;


  for (int row = 0; row < height; row++) {
    for (int col = 0; col < width; col++) {
      assert(image[row][col] < 256);
      assert(image[row][col] >= 0);
      ostr << image[row][col] << ' ';
      ostr << endl;
    }
  }
  ostr.close();
  return;
}

void invert(int image[MAX_H][MAX_W], int &height, int &width) {
  // int img[MAX_H][MAX_W];
  // int h, w;
  // readImage("test_image.pgm",img, h, w);
  // int out[MAX_H][MAX_W];
  //
  // for(int row = 0; row < h; row++) {
  //   for(int col = 0; col < w; col++) {
  //     out[row][col] = abs(img[row][col] - 255);
  //   }
  // }
  //
  // writeImage("taska.pgm", out, h, w);

  int copy[MAX_H][MAX_W];
	int originalHeight = height;
	int originalWidth = width;

	for (int row = 0; row < height; row++){
		for (int col = 0; col < width; col++){
			copy[row][col] = 255 - image[row][col];
		}
	}

	// Now we can manipulate the image the way we like
	// for example we copy its contents into a new array
	int out[MAX_H][MAX_W];

	for(int row = 0; row < height; row++) {
		for(int col = 0; col < width; col++) {
			out[row][col] = copy[row][col];
		}
	}

	// and save this new image to file "outImage.pgm"
	writeImage("invert.pgm", out, height, width);
	height = originalHeight;
	width = originalWidth;

}

void invert_half(int image[MAX_H][MAX_W], int &height, int &width){
	int copy[MAX_H][MAX_W];
	int originalHeight = height;
	int originalWidth = width;

	for (int row = 0; row < height; row++){
		for (int col = 0; col < width; col++){
			if (col > width / 2){
				copy[row][col] = 255 - image[row][col];
			} else {
				copy[row][col] = image[row][col];
			}
		}
	}

	int out[MAX_H][MAX_W];

	for(int row = 0; row < height; row++) {
		for(int col = 0; col < width; col++) {
			out[row][col] = copy[row][col];
		}
	}


	writeImage("inverthalf.pgm", out, height, width);
	height = originalHeight;
	width = originalWidth;
}

void box(int image[MAX_H][MAX_W], int &height, int &width){
	int leftBound, rightBound;
	int upperBound, lowerBound;
	int boxWidth, boxHeight;
	int originalHeight = height;
	int originalWidth = width;
	int copy[MAX_H][MAX_W];

	boxWidth = width / 2;
	boxHeight = height / 2;

	leftBound = (width / 2) - (boxWidth / 2);
	rightBound = (width / 2) + (boxWidth / 2);
	upperBound = (height / 2) + (boxHeight / 2);
	lowerBound = (height / 2) - (boxHeight / 2);

	for (int row = 0; row < height; row++){
		for (int col = 0; col < width; col++){
			if ((lowerBound <= row) && (row <= upperBound)){
				if ((leftBound <= col) && (col <= rightBound)){
					copy[row][col] = 255;
				} else {
					copy[row][col] = image[row][col];
				}
			} else {
				copy[row][col] = image[row][col];
			}
		}
	}


	int out[MAX_H][MAX_W];

	for(int row = 0; row < height; row++) {
		for(int col = 0; col < width; col++) {
			out[row][col] = copy[row][col];
		}
	}


	writeImage("box.pgm", out, height, width);
	height = originalHeight;
	width = originalWidth;
}

void frame(int image[MAX_H][MAX_W], int &height, int &width){
	int leftBound, rightBound;
	int upperBound, lowerBound;
	int frameWidth, frameHeight;
	int originalHeight = height;
	int originalWidth = width;
	int copy[MAX_H][MAX_W];

	frameWidth = width / 2;
	frameHeight = height / 2;

	leftBound = (width / 2) - (frameWidth / 2);
	rightBound = (width / 2) + (frameWidth / 2);
	upperBound = (height / 2) + (frameHeight / 2);
	lowerBound = (height / 2) - (frameHeight / 2);

	for (int row = 0; row < height; row++){
		for (int col = 0; col < width; col++){
			copy[row][col] = image[row][col];
		}
	}

	for (int row = 0; row < height; row++){
		for (int col = 0; col < width; col++){
			if (row == lowerBound || row == upperBound){
				if (leftBound <= col && col <= rightBound){
					copy[row][col] = 255;
				}
			}

			if (col == leftBound || col == rightBound){
				if (lowerBound <= row && row <= upperBound){
					copy[row][col] = 255;
				}
			}
		}
	}


	int out[MAX_H][MAX_W];

	for(int row = 0; row < height; row++) {
		for(int col = 0; col < width; col++) {
			out[row][col] = copy[row][col];
		}
	}


	writeImage("frame.pgm", out, height, width);
	height = originalHeight;
	width = originalWidth;
}

void scale(int image[MAX_H][MAX_W], int &height, int &width){
	int originalHeight = height;
	int originalWidth = width;

	height *= 2;
	width *= 2;

	cout << originalHeight << endl;
	cout << originalWidth << endl;

	int originalRow = 0;
	int originalCol = 0;

	int copy[MAX_H][MAX_W];

	for (int row = 0; row < height; row += 2){
		for (int col = 0; col < width; col += 2){
			copy[row][col] = image[originalRow][originalCol];
			copy[row + 1][col] = image[originalRow][originalCol];
			copy[row][col + 1] = image[originalRow][originalCol];
			copy[row + 1][col + 1] = image[originalRow][originalCol];

			originalCol++;
		}
		originalRow++;
		originalCol = 0;
	}

	int out[MAX_H][MAX_W];

	for(int row = 0; row < height; row++) {
		for(int col = 0; col < width; col++) {
			out[row][col] = copy[row][col];
		}
	}


	writeImage("scale.pgm", out, height, width);

	height = originalHeight;
	width = originalWidth;
}

void pixelate(int image[MAX_H][MAX_W], int &height, int &width){
	int copy[MAX_H][MAX_W];
	int originalHeight = height;
	int originalWidth = width;

	for (int row = 0; row < height; row += 2){
		for (int col = 0; col < width; col += 2){
			double avg = 0;
			avg += image[row][col];
			avg += image[row + 1][col];
			avg += image[row][col + 1];
			avg += image[row + 1][col + 1];

			avg /= 4;

			copy[row][col] = avg;
			copy[row + 1][col] = avg;
			copy[row][col + 1] = avg;
			copy[row + 1][col + 1] = avg;
		}
	}

	int out[MAX_H][MAX_W];

	for(int row = 0; row < height; row++) {
		for(int col = 0; col < width; col++) {
			out[row][col] = copy[row][col];
		}
	}

	// and save this new image to file "outImage.pgm"
	writeImage("pixelate.pgm", out, height, width);
	height = originalHeight;
	width = originalWidth;
}

// Write all your functions in here
