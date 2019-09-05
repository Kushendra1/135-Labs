#include "funcs.h"
#include <iostream>
#include <vector>

// Sample function

std::string greet(std::string name){
  return "Hello "+name+"!";
}

std::vector<int> makeVector(int n) {
  std::vector<int> result;
  for (int i = 0; i < n; i++) {
    result.push_back(i);
  }
  return result;
}

std::vector<int> goodVibes(std::vector<int> v) {
  std::vector<int> result;
  std::vector<int> negatives;
  for (int i = 0; i < v.size(); i++) {
    if (v[i] > 0) {
      result.push_back(v[i]);
    }
    else if (v[i] < 0) {
      negatives.push_back(v[i]);
    }
  }
  return result;
}

void gogeta(std::vector<int> &goku, std::vector<int> &vegeta) {
  for (int i = 0; i < vegeta.size(); i++) {
    goku.push_back(vegeta[i]);
  }
  vegeta.clear();
}

std::vector<int> sumPairWise(std::vector<int> &v1, std::vector<int> &v2){
  std::vector<int> sum;
  if (v1.size() > v2.size()) {
    for (int i = 0; i < v2.size(); i++) {
      sum.push_back(v1[i] +v2[i]);
    }
    for (int i = v2.size(); i < v1.size(); i++) {
      sum.push_back(v1[i]);
    }
  }
  else if (v2.size() > v1.size()){
    for (int i = 0; i < v1.size(); i++) {
      sum.push_back(v1[i] +v2[i]);
    }
    for (int i = v1.size(); i < v2.size(); i++) {
      sum.push_back(v2[i]);
    }
  }
  else if(v1.size() == v2.size()) {
    for (int i = 0; i < v1.size(); i++){
      sum.push_back(v1[i] + v2[i]);
    }
  }
  return sum;
}
// Write all your functions in here
