// Database.h

#include <iostream>
#include "Employee.h"

namespace Records {

  const int kMaxHotels = 100;
  const int kFirstHotelNumber = 1000;
    class Database
      {
      public:
	Database();
	~Database();

	Hotel& addHotel(int iHotelId, std::string sHotelName);
	Employee& getEmployee(int iHotelId);
	Employee& getEmployee(std::string sHotelName);
	void displayAll();
	void displayCurrent();
	void putInFile(FILE);
      protected:
	Hotel    mHotels[kMaxHotels];
	int         mNextSlot;
	int         mNextHotelNumber;
      };
}
