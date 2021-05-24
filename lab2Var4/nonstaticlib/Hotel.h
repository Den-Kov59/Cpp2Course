//Hotel.h
#include <string> 
class Hotel
{
public:
 Hotel();
 ~Hotel();

 double getHotelRating();
 void setHotelRating(double Rating);
 int getHotelId();
 void setHotelId(int Id);
 void setHotelName(std::string Name);
 std::string getHotelName();
 std::string getHotelAddress();
 void setHotelAddress(std::string Address);
 std::string getHotelPerson();
 void setHotelPerson(std::string Person);
 void display();
 std::string getHotelFull();
 private:
  std::string sHotelName;
  int iHotelId;
  std::string sHotelAddress;
  std::string sHotelPerson;
  double dHotelRating;
};
