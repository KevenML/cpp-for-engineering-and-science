# ------------------------------------------------------
# File Name: Makefile
#
# Description:
# Automates compilation of the CIS2485 project.
#
# Usage:
#   make        → compile program
#   make run    → compile and run
#   make clean  → remove build files
# ------------------------------------------------------

CXX = g++
CXXFLAGS = -Wall -std=c++11

SRC = src/main.cpp src/calcVolts.cpp
OUT = build/program

all:
	mkdir -p build
	$(CXX) $(CXXFLAGS) $(SRC) -o $(OUT)

run: all
	./$(OUT)

clean:
	rm -rf build