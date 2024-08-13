# Compiler
CXX = g++

# Directories
SRC_DIR = Source
HEADER_DIR = Header
BUILD_DIR = build

# Source files
SOURCES = $(SRC_DIR)/main.cpp $(SRC_DIR)/Menu.cpp $(SRC_DIR)/Student.cpp

# Object files
OBJECTS = $(patsubst $(SRC_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(SOURCES))

# Header files
HEADERS = $(HEADER_DIR)/Student.h $(HEADER_DIR)/Menu.h

# Output executable
TARGET = test

# Compiler flags
CXXFLAGS = -I$(HEADER_DIR) -Wall -Wextra -std=c++11 -fsanitize=address,undefined -g

# Linker flags
LDFLAGS = -fsanitize=address,undefined

# Default target
all: $(TARGET)

# Build the target executable
$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $@ $(LDFLAGS)

# Compile source files to object files
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp $(HEADERS) | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Create build directory if it doesn't exist
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Clean build files
clean:
	rm -rf $(BUILD_DIR) $(TARGET)

# Rebuild the project
rebuild: clean all

.PHONY: all clean rebuild
