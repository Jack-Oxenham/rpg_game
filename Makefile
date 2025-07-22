
CXX ?= g++
CXXFLAGS = -Wall -std=c++17

SRC_DIR = src
BUILD_DIR = build
BIN = app

SRCS = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(patsubst $(SRC_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(SRCS))

all: $(BIN)

$(BIN): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -rf $(BUILD_DIR) $(BIN)

