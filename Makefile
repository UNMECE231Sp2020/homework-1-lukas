LIB = -lm
C_FNS = complex_fns.c
C_MAIN = main.c $(C_FNS)

all:
	gcc $(C_MAIN) $(LIB) -o test_complex

clean:
	rm test_complex
