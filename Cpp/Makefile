# Nome do executável
TARGET = sort_app

# Pasta onde estão os arquivos fontes
SRC_DIR = SortAlgorithms

# Compilador e flags
CXX = g++
CXXFLAGS = -Wall -std=c++17

# Diretórios de cabeçalhos
INCLUDES = -I. -I$(SRC_DIR) -I..

# Fontes
SRCS = $(wildcard $(SRC_DIR)/*.cpp) main.cpp

# Regra principal
all: $(TARGET)

# Como construir o executável diretamente a partir dos fontes
$(TARGET):
	$(CXX) $(CXXFLAGS) $(INCLUDES) $(SRCS) -o $(TARGET)

# Limpar arquivos gerados
clean:
	rm -f $(TARGET)

# Executar
run: all
	./$(TARGET)
