import RPi.GPIO as GPIO
import serial, time
import sys

print(" ")
print("Numbers must be between 9999 and 0!")
print(" ")

startNum = int(raw_input("Enter your start number!: "))
endNum = int(raw_input("Enter your end number!: "))
print(" ")

GPIO.setmode(GPIO.BCM)
GPIO.setup(9, GPIO.IN) #MISO
GPIO.setup(10, GPIO.IN) #MOSI
GPIO.setup(11, GPIO.IN) #SCLK

ser = serial.Serial('/dev/ttyAMA0', 9600)

def display(num) :
	if len(str(num)) > 4 :
		print("Number must be between 1000 and 0!")
		sys.exit()

	if len(str(num)) == 3 :
		ser.write(' ')

	if len(str(num)) == 2 :
		ser.write('  ')

	if len(str(num)) == 1 :
		ser.write('   ')

	ser.write(str(num))

for n in range(startNum, endNum - 1, -1) :
	display(n)
	time.sleep(0.01)

ser.close()
