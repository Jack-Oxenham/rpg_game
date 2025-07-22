# Compiler and flags
CXX ?= g++
CXXFLAGS = -Wall -std=c++17

# Source and target
SRCS = Player.cpp Enemy.cpp Combat.cpp RPG.cpp
OBJS = $(SRCS:.cpp=.o)
BIN = rpg_game

all: $(BIN)

$(BIN): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(BIN)

