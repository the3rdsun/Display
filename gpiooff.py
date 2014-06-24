import RPi.GPIO as GPIO

GPIO.setmode(GPIO.BCM)

for pin in range(0,25):
  GPIO.setup(pin, GPIO.IN)


