# Compiler
CXX = g++

# Source directories
SRCDIRS := Command Invoker Logger Receiver

# Header directories
INCDIRS := $(SRCDIRS)

# Main source file
MAIN_SRC := main.cpp

# Additional source files
# ADDITIONAL_SRCS := 

# Target executable
TARGET := ROBOTARM

# List of source files
SRCS := $(wildcard $(addsuffix /*.cpp,$(SRCDIRS))) $(MAIN_SRC) $(ADDITIONAL_SRCS)

# List of object files
OBJS := $(SRCS:.cpp=.o)

# Compiler flags
CXXFLAGS := -Wall $(addprefix -I,$(INCDIRS))

# Default target
all: $(TARGET)

# Rule to build the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Rule to compile source files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean rule
clean:
	rm -f $(OBJS) $(TARGET)


