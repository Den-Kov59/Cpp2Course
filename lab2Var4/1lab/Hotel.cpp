#include<iostream>
#include "Hotel.h"

using namespace std;

Hotel::Hotel()
{
 sHotelName="No name";
 sHotelAddress="No address";
 iHotelId=-1;
 dHotelRating=1;
 sHotelPerson="No person";
}
Hotel::~Hotel()
{
}
string Hotel::getHotelName()
{
 return sHotelName;
}
void Hotel::setHotelName(string Name)
{
 sHotelName=Name;
}

string Hotel::getHotelAddress()
{
 return sHotelAddress;
}
void Hotel::setHotelAddress(string Address)
{
 sHotelAddress=Address;
}
string Hotel::getHotelPerson()
{
 return sHotelPerson;
}
void Hotel::setHotelPerson(string Person)
{
 sHotelPerson=Person;
}
int Hotel::getHotelId()
{
 return iHotelId;
}
void Hotel::setHotelId(int Id)
{
 iHotelId=Id;
}
double Hotel::getHotelRating()
{
 if(sHotelName=="No name" || iHotelId==-1 || sHotelPerson=="No person" || sHotelAddress=="No address")
 return dHotelRating*0.5;
 return dHotelRating;
}
void Hotel::setHotelRating(double Rating)
{
 dHotelRating=Rating;
}
void Hotel::display() {
    cout<<sHotelName<<"  "<<sHotelAddress;
}
string Hotel::getHotelFull() {
    return sHotelName;
}