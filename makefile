# change application name here (executable output name)
TARGET=xaero

# compiler
CC=gcc
# warnings
WARN=-Wall


CCFLAGS=$(WARN)

SRC= main2.c TAD_AUXILIAR/horario.c TAD/VOO.c TAD/LISTA_DE_VOOS.c TAD/ITEM_MATRIZ.c TAD/MATRIZ_VOOS.c TAD/VETOR_MATRIZ_VOOS.c

all:
	$(CC) -o $(TARGET) $(SRC) $(CCFLAGS) -lm

run:
	./$(TARGET)

clean:
	rm $(TARGET)
