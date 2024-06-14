# Compiler
CXX = g++

# Source directories
SRCDIRS := DoorLockSystem SmartLightSystem ThermoSystem

# Header directories
INCDIRS := $(SRCDIRS)

# Main source file
MAIN_SRC := main.cpp

# Additional source files
ADDITIONAL_SRCS := MobileApp.cpp

# Target executable
TARGET := SmartHomeApp

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


#          Project_Root/
#          │
#          ├── DoorLockSystem/
#          │   ├── DoorLock.cpp
#          │   ├── DoorLock.h
#          │   ├── DoorLockAdapter.cpp
#          │   └── DoorLockAdapter.h
#          │
#          ├── SmartLightSystem/
#          │   ├── SmartLight.cpp
#          │   ├── SmartLight.h
#          │   ├── SmartLightAdapter.cpp
#          │   └── SmartLightAdapter.h
#          │
#          ├── ThermoSystem/
#          │   ├── Thermo.cpp
#          │   ├── Thermo.h
#          │   ├── ThermoAdapter.cpp
#          │   └── ThermoAdapter.h
#          │
#          ├── MobileApp.cpp
#          ├── MobileApp.h
#          └── main.cpp
#          