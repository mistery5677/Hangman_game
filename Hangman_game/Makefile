# Nome do executável final
TARGET = forca

# Compilador
CXX = c++

# Flags do compilador
CXXFLAGS = -Wall -Wextra -std=c++11

# Lista de arquivos fonte (pega todos os .cpp do diretório atual)
SRC = $(wildcard *.cpp)

# Gera os arquivos objeto (.o) a partir dos arquivos fonte
OBJ = $(SRC:.cpp=.o)

# Regra principal: cria o executável
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Regra para compilar arquivos .cpp em .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpa arquivos objeto e executável
clean:
	rm -f $(OBJ) $(TARGET)

# Evita que 'clean' seja interpretado como um arquivo real
.PHONY: clean
