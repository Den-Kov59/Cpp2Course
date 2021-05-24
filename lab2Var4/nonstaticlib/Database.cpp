// Database.cpp

#include <iostream>
#include <stdexcept>
#include <string>

#include "Database.h"

using namespace std;

namespace Records {

  Database::Database()
  {
    mNextSlot = 0;
    mNextHotelNumber = kFirstEmployeeNumber;
  }
  Database::~Database()
  {
  }
    Hotel& Database::addHotel(int iHotelId, std::string sHotelName)
  {
    if (mNextSlot >= kMaxHotels) {
      cerr << "There is no more room to add the new Hotel!" << endl;
      throw exception();
    }
    Hotel& theHotel = mHotels[mNextSlot++];
    theHotel.setFirstName(inFirstName);
    theHotel.setHotelId(inLastName);
    return theHotel;
  }
  Hotel& Database::getHotel(int iHotelId)
  {
    for (int i = 0; i < mNextSlot; i++) {
      if (mHotels[i].getHotelId() == iHotelId) {
	return mHotels[i];
      }
    }
    cerr << "No employee with employee number " << iHotelId << endl;
    throw exception();
  }

  Employee& Database::getEmployee(string sHotelName)
  {
    for (int i = 0; i < mNextSlot; i++) {
      if (mHotels[i].getHotelName() == sHotelName ) {
	return mHotels[i];
      }
    }
    cerr << "No match with name " << sHotelName << endl;
    throw exception();
  }
  void Database::displayAll()
  {
    for (int i = 0; i < mNextSlot; i++) {
        mHotels[i].display();
    }
  }
    void Database::putInFile(FILE *fo) {
        for (int i = 0; i < mNextSlot; i++) {
            fprintf(fo,"%s\n",mHotels.getHotelFull);}
  }
  void Database::displayCurrent()
  {
    for (int i = 0; i < mNextSlot; i++) {
          mHotels[i].display();
      }
    }

}
