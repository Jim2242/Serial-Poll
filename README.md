# Serial-Poll
Polling Serial Interface

The delay between led blinks is modified when a new character arrives from the serial interface, this delay is printed back to the serial interface to be observed on the serial monitor.

1) Program Loop toggles a boolean state variable when a new character arrives from serial port, it polls for a new character at the beginning of the loop and subsequently reads the character.
2) The delay variable = 1000 ms + state variable * 1000 ms
3) The value of the delay variable is printed to the serial port
4) LEDs blink on and off using delay variable

Have yet to find a way to use the serial interface to create an interrupt for my arduino Nano board.
