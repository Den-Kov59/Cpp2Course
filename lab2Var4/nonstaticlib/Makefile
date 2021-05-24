all: binary

binary: HotelTest.o Hotel_lib.a
	g++ -o binary HotelTest.o -L. -lHotel -Wl, -rpath,.
HotelTest.o: HotelTest.cpp
	g++ -c HotelTest.cpp
libHotel.so: Hotel.o Database.o
	gcc -shared -o libHotel.so Database.o Hotel.o
Hotel.o: Hotel.cpp
	g++  -c -fPIC Hotel.cpp
Database.o: Database.cpp
	g++  -c -fPIC Database.cpp
clean:
	rm -rf *.o *.a binary
