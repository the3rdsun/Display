import RPi.GPIO as GPIO

GPIO.setmode(GPIO.BCM)
GPIO.setup(9, GPIO.IN) #MISO
GPIO.setup(10, GPIO.IN) #MOSI
GPIO.setup(11, GPIO.IN) #SCLK


