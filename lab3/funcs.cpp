#include "funcs.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>

double east_storage(std::string date)
{
  std::ifstream fin("Current_Reservoir_Levels.tsv");
  if (fin.fail()) {
    std::cerr << "File cannot be opened for reading." << std::endl;
    exit(1);
  }
  std::string junk;
  getline(fin, junk);
  std::string filedate;
  double eastSt, eastEl, westSt, westEl;
  // std::cout << "Enter your date" << std::endl;
  // std::cin >> input;
  while(fin >> filedate >> eastSt >> eastEl >> westSt >> westEl) {
    fin.ignore(INT_MAX, '\n');

    if (date == filedate)
    {
      std::cout<< "The east storage basin is " << eastSt << " Billions of gallons" << std::endl;
      break;
    }
  }
	fin.close();
	return eastSt;
}

double min_storage()
{
  double eastSt;
  std::ifstream fin("Current_Reservoir_Levels.tsv");
	if (fin.fail()){
		std::cerr << "File could not be opened for reading." << std::endl;
		exit(1);
	}
	std::string junk;
	getline(fin, junk);
	std::string date;
  fin >> date >> eastSt;
  double min = eastSt;

  while (fin >> date >> eastSt) {
    fin.ignore(INT_MAX, '\n');
    if (min > eastSt) {
      min = eastSt;
    }
  }
  fin.close();
  return min;
}

double max_storage()
{
  std::ifstream fin("Current_Reservoir_Levels.tsv");
	if (fin.fail()){
		std::cerr << "File could not be opened for reading." << std::endl;
		exit(1);
	}
	std::string junk;
	getline(fin, junk);
	std::string date;
	double max;
  double eastSt;

  while (fin >> date >> eastSt) {
    fin.ignore(INT_MAX, '\n');

    if (eastSt > max) {
      max = eastSt;
    }
  }
  fin.close();
  return max;
}

std::string compare_basins(std::string date, std::string date2)
{
  std::ifstream fin("Current_Reservoir_Levels.tsv");
  if (fin.fail()){
		std::cerr << "File could not be opened for reading." << std::endl;
		exit(1);
	}
	std::string junk;
	getline(fin, junk);
	std::string filedate;
  double eastSt, eastEl, westSt, westEl;

  while(fin >> filedate >> eastSt >> eastEl >> westSt >> westEl) {
    fin.ignore(INT_MAX, '\n');

    if (date <= filedate && filedate <= date2)
    {
      if (eastEl > westEl){
        std::cout << filedate << " East" << std::endl;
      }
      else if (eastEl < westEl){
          std::cout << filedate << " West" << std::endl;
      }
      else  {
          std::cout << filedate << " Equal" << std::endl;
      }
    }
   }
fin.close();
}

void reverse(std::string date, std::string date2)
{
  std::ifstream fin("Current_Reservoir_Levels.tsv");
  if (fin.fail()){
		std::cerr << "File could not be opened for reading." << std::endl;
		exit(1);
	}
	std::string junk;
	getline(fin, junk);
	std::string filedate;
  double eastSt, eastEl, westSt, westEl;
  bool run = false;
  std::string dates[366];
  double num [366];
  int index = 0;

  while(fin >> filedate >> eastSt >> eastEl >> westSt >> westEl){
    fin.ignore(INT_MAX, '\n');

    if (date == filedate){
      run = true;
    }
    if (run){
      dates[index] = filedate;
      num[index] = westEl;
      index++;
    }
    if (filedate >= date && filedate <= date2){
      run = true;
    }
    if (filedate < date) {
      run = false;
    }
  }
  for (int i = index-1;i>= 0; i--){
    std::cout << dates[i] << " " << num[i] << " ft." << std::endl;
  }
  fin.close();
}
