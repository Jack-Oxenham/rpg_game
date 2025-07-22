

CXX = clang++
CXXFLAGS = -Wall -std=c++17

TARGET = rpg_game

SRC = RPG.cpp Player.cpp Enemy.cpp Combat.cpp

OBJ = $(SRC:.cpp=.o)

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)


clean:
	rm -f $(TARGET) *.o