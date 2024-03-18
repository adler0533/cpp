CXX = g++
CC = $(CXX)

CXXFLAGS = -std=c++17 -pedantic -Wall -Wconversion -Werror

TARGET = main
SRCS = circle.cpp
OBJS = main.o

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

main.o: $(SRCS)
	$(CXX) $(CXXFLAGS) -c $(SRCS) -o main.o

check: $(TARGET)
	./$(TARGET)

clean:
	rm -f *.o $(TARGET)


