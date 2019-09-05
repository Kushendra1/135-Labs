#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "profile.h"
#include "network.h"

// Write test cases here
TEST_CASE("Task A"){
  // task A tests go here
  Profile p1("marco", "Marco");
	CHECK(p1.getUsername() == "marco");
	CHECK(p1.getFullName() == "Marco (@marco)");

	p1.setDisplayName("Marco Rossi");
	CHECK(p1.getFullName() == "Marco Rossi (@marco)");

  Profile p2("tarma1", "Tarma Roving");
  CHECK(p2.getUsername() == "tarma1");
  CHECK(p2.getFullName() == "Tarma Roving (@tarma1)");

  p2.setDisplayName("Tarma");
  CHECK(p2.getFullName() == "Tarma (@tarma1)");

  Profile p3("yurrboikush", "Kushendra Ramrup");
  CHECK(p3.getUsername() == "yurrboikush");
  CHECK(p3.getFullName() == "Kushendra Ramrup (@yurrboikush)");

  p3.setDisplayName("kush");
  CHECK(p3.getFullName() == "kush (@yurrboikush)");
}

TEST_CASE("Task B"){
  Network nw;

  CHECK(nw.addUser("mario", "Mario") == true);
  CHECK(nw.addUser("luigi", "Luigi") == true);
  CHECK(nw.addUser("mario", "Mario2") == false);
  CHECK(nw.addUser("mario 2", "Mario2") == false);
  CHECK(nw.addUser("mario-2", "Mario2") == false);
}

TEST_CASE("Task C"){
  Network nw;

  nw.addUser("mario", "Mario");
  nw.addUser("luigi", "Luigi");
  nw.addUser("yoshi", "Yoshi");
  nw.follow("mario", "luigi");
  nw.follow("mario", "yoshi");
  nw.follow("luigi", "mario");
  nw.follow("luigi", "yoshi");
  nw.follow("yoshi", "mario");
  nw.follow("yoshi", "luigi");

  CHECK(nw.isFollowing("mario", "luigi") == true);
  CHECK(nw.isFollowing("mario", "yoshi") == true);

  CHECK(nw.isFollowing("luigi", "mario") == true);
  CHECK(nw.isFollowing("luigi", "yoshi") == true);

  CHECK(nw.isFollowing("yoshi", "mario") == true);
  CHECK(nw.isFollowing("yoshi", "luigi") == true);
}
