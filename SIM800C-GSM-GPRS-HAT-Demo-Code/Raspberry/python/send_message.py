#!/usr/bin/python
# Filename: text.py
import serial
import time
ser = serial.Serial("/dev/ttyAMA0",115200)
W_buff = ["AT\r\n"]
ser.write(W_buff[0])
ser.flushInput()

ser.write("AT\r")
response = serialport.readlines(None)
print(response)