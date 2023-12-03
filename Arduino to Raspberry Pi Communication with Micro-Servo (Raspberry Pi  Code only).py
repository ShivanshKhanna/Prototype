import serial
import time

if __name__ == '__main__':
    
    # Set up our serial communication, you will need to change ttyUSB0 to match your serial port, 9600 is the baud rate
    ser = serial.Serial('/dev/ttyACM1', 9600, timeout=1)
    ser.reset_input_buffer()

    while True:
        ser.write(b"Up\n")
        time.sleep(1)
        ser.write(b"Down\n")
        time.sleep(1)
        if ser.in_waiting > 0:
            # Decode it and print it to the console
            line = ser.readline().decode('utf-8').rstrip()
            print(line)
