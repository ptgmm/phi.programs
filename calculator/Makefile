CC = gcc

TARGET = main
OUTPUT = run

all: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) $(TARGET).c -o $(OUTPUT) -lglut -lGL -lGLU

clean: 
	$(RM) $(OUTPUT)
