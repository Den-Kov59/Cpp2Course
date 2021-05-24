#include <iostream>
#include "Hotel.h"
#include <stdio.h>
using namespace std;
int main(int argc, char** argv)
{FILE *fw=fopen("test.txt","w");


 Hotel myHotel; //stack
 myHotel.setHotelName("First");
 myHotel.setHotelId(12);
 myHotel.setHotelAddress("Shevchenka St. 16");
 myHotel.setHotelPerson("John");
 myHotel.setHotelRating(4);
 int rate=myHotel.getHotelRating();
 cout<<"Hotel rating is "<<rate<<endl;

 Hotel* myHotel2; // heap

 myHotel2=new Hotel();
 myHotel2->setHotelName("Second");
 myHotel2->setHotelId(13);
 myHotel2->setHotelAddress("Marco st. 99");
 myHotel2->setHotelRating(4);
 int rate2=myHotel2->getHotelRating();
 cout<< "Hotel rating is "<< rate2;
 delete myHotel2;
    fputs(myHotel)
 return 0;
}
