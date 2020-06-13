import serial
import time
ser = serial.Serial('COM4', 9600)
while(1):
  a=raw_input ("Enter a")
  if a =="F":
    print "Forward"
    time.sleep(0.001)
    ser.write('1')
  elif a =="B":
    print "BACK"
    time.sleep(0.001)
    ser.write('4')
  elif a =="R":
    print "Right"
    time.sleep(0.001)
    ser.write('3')
  elif a =="L":
    print "left"
    time.sleep(0.001)
    ser.write('2')
  elif a =="S":
    print "Stop"
    time.sleep(0.001)
    ser.write('5')
  else:
    print "Stop"
    time.sleep(0.001)
    ser.write('5')
