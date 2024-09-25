CC = gcc
CFLAGS = -g -Wall

capybara: capybara.o
	$(CC) $(CFLAGS) $< -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm capybara.o capybara
