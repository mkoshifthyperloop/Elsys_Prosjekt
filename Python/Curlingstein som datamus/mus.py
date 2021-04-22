import pyautogui
import keyboard
import time
import serial
import math
import win32api, win32con 

arduino = serial.Serial(port='COM4', baudrate=2000000, timeout=.1)

sensitivity = 40

coordinates = [500 * sensitivity, 500 * sensitivity]

def main():
    crashes = 0
    while keyboard.is_pressed("q") == False:
        data = arduino.readline()
        
        try:
            data = data.decode("utf-8")
            data = data.split(",")
            coordinates[0] = int(round(float(data[0]))) #+ coordinates[0]
            coordinates[1] = int(round(float(data[1]))) #+ coordinates[1]
            print(coordinates)
            win32api.SetCursorPos((int(round(coordinates[0]/sensitivity)), int(round(coordinates[1])/sensitivity)))
        except:
            crashes += 1
            print(crashes)
        #print("kattepus")
    return

main()
