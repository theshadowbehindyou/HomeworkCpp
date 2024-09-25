CXX = g++
CC = g++
CXXFLAGS = -g -Wall -std=c++11

TARGET = capybara
OBJECTS = main.o capybara.o

all: $(TARGET)

$(TARGET): $(OBJECTS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm $(TARGET) $(OBJECTS)


# CC = g++
# CFLAGS = -g -Wall
# BUILD_FILE = capybara.cpp

# all:
# 	$(CC) $(CFLAGS) $(BUILD_FILE) -o capybara

# capybara: main.o capybara.o
# 	g++ $^ -o $@

# main.o: main.cpp
# 	g++ -c main.cpp -o main.o

# capybara.o: capybara.cpp
# 	g++ -c capybara.cpp -o capybara.o

# clean:
# 	rm main.o capybara.o capybara