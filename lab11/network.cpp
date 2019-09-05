#include <iostream>
#include "network.h"


Network::Network() {
  numUsers = 0;
  for (int i = 0; i < MAX_USERS; i++){
		for (int j = 0; j < MAX_USERS; j++){
			following[i][j] = false;
		}
	}
}

bool Network::addUser(string usrn, string dspn) {

  if(usrn == "" || numUsers + 1 > MAX_USERS) {
    return false;
  }

  for (int i = 0; i < numUsers; i++){
    if(profiles[i].getUsername()==usrn){
      return false;
    }
  }
  for (int i = 0; i < usrn.length(); i++){
    if(!isalpha(usrn[i])&&!isdigit(usrn[i])){
        return false;
    }
  }

  Profile* prof = new Profile(usrn, dspn);
  profiles[numUsers] = *prof;
  delete prof;
  numUsers++;
  return true;
}

int Network::findID (string usrn){
  for (int i = 0; i < 20; i++){
    if(profiles[i].getUsername()==usrn){
      return i;
    }
  }
  return -1;
}

bool Network::follow(string usrn1, string usrn2){
  bool check1 = false;
  bool check2 = false;
  int index1;
  int index2;
  for(int i = 0; i < numUsers; i++){
    if(profiles[i].getUsername() == usrn1){
      check1 = true;
      index1 = i;
    }
    if(profiles[i].getUsername() == usrn2){
      check2 = true;
      index2 = i;
    }
  }
  if(check1&&check2){
    following[index1][index2] = true;
    return true;
  }
  return false;
}

// Print Dot file (graphical representation of the network)
void Network::printDot(){
  std::cout<<"digraph {"<<std::endl;
  for(int i = 0; i < numUsers; i++){
    std::cout<< profiles[i].getUserWithAt()<<std::endl;
  }

  for(int i = 0; i < numUsers; i++){
    for(int k = 0; k < numUsers; k++){
      if(following[i][k]){
        std::cout<<profiles[i].getUserWithAt()<<" -> "<<profiles[k].getUserWithAt()<<std::endl;
      }
    }
  }
  std::cout<<"}";
}

bool Network::isFollowing(string usrn1, string usrn2){
	return following[findID(usrn1)][findID(usrn2)];
}
