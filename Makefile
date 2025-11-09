# --- Compiler settings ---
CXX = g++
ASM = yasm
CXXFLAGS = -Wall -std=c++17
ASMFLAGS = -f elf64

# --- Files ---
TARGET = main
OBJS = main.o Shape.o Calculation.o

# --- Default rule ---
all: $(TARGET)

# --- Link everything ---
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# --- Compile C++ files ---
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# --- Compile Assembly files ---
%.o: %.asm
	$(ASM) $(ASMFLAGS) -o $@ $<

# --- Clean up ---
clean:
	rm -f $(OBJS) $(TARGET)
