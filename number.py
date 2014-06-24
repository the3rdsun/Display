import RPi.GPIO as GPIO
import serial, time

GPIO.setmode(GPIO.BCM)
GPIO.setup(9, GPIO.IN) #MISO
GPIO.setup(10, GPIO.IN) #MOSI
GPIO.setup(11, GPIO.IN) #SCLK

ser = serial.Serial('/dev/ttyAMA0', 9600)

ser.write('1234')

ser.close()
