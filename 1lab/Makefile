all: binary

binary: HotelTest.o Hotel_lib.a
	g++ -o binary HotelTest.o -L. -lHotel
HotelTest.o: HotelTest.cpp
	g++ -c HotelTest.cpp
libHotel.a: Hotel.o Database.o
	ar cr libHotel.a Database.o Hotel.o
Hotel.o: Hotel.cpp
	g++ -c Hotel.cpp
Database.o: Database.cpp
	g++ -c Database.cpp
clean:
	rm -rf *.o *.a binary
