EXEC = test_led
SRC = test_led.c

CC = gcc
CFLAGS = -O0 -lwiringPi

$(EXEC): $(SRC)
	$(CC) -o $@ $(SRC) $(CFLAGS)

.PHONY: clean
clean:
	rm -f $(EXEC)

.PHONY: run
run:
	sudo ./$(EXEC) >> /dev/null &

.PHONY: stop
stop:
	sudo killall $(EXEC)
