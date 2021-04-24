Gram=y.tab.c y.tab.h

all: clean $(Gram) vector_cal.c
	@gcc -o vec y.tab.c vector_cal.c -lm 
	@echo Compiled

vector_cal.c:
	@echo "El archivo se encuentra"

$(Gram): vector_cal.y
	@yacc -d vector_cal.y
	@echo "Archivos y.tab.c y.tab.h generados"

clean:
	@rm -f *.out *.tab.* vec
	@echo Clean
