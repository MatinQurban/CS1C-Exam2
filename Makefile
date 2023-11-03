CC = g++
TARGET = main
OBJS = Vehicle.o landVehicle.o waterVehicle.o airVehicle.o

all: $(TARGET)

$(TARGET): $(OBJS) main.cpp vehicle.h landVehicle.h waterVehicle.h airVehicle.h vehicle.cpp landVehicle.cpp waterVehicle.cpp airVehicle.cpp
	$(CC) main.cpp -o $(TARGET) $(OBJS)

$(OBJS): %.o: %.cpp %.h
	$(CC) -c $< -o $@

clean:
	rm -f $(TARGET) *.o 

