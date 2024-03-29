
#include <string>
#include <iostream>
#include "profile.h"
using std::string;

class Network {
	private:
	    static const int MAX_USERS = 20;
	    int numUsers;
	    Profile profiles[MAX_USERS];
      	    bool following[MAX_USERS][MAX_USERS];
	    int findID (string usrn);
	public:
	    Network();
	    bool addUser(string usrn, string dspn);
	    bool follow(string usrn1, string usrn2);
      	    bool isFollowing(string usrn1, string usrn2);
	    void printDot();
};
