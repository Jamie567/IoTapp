
import serial
import time
import string

ser = serial.Serial("/dev/rfcomm0", 9600)
ser.write("LED_ON".encode())



