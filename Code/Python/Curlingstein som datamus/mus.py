import pyautogui
import keyboard
import time
import serial
import math
import win32api, win32con 

arduino = serial.Serial(port='COM4', baudrate=2000000, timeout=.1)

sensitivity = 1

coordinates = [500 , 500 ]

def main():
    crashes = 0
    while keyboard.is_pressed("q") == False:
        data = arduino.readline()
        print(data)
        
        try:
            data = data.decode("utf-8")
            data = data.split(",")
            
            #data[2] = data[2][0:-2]
            #print(data)
            
            coordinates[0] = int(round(float(data[0])*100)) #+ coordinates[0]
            coordinates[1] = int(round(float(data[1])*100)) #+ coordinates[1]
            #print(coordinates, int(round(float(data[0]))))
            
            ##coordinates[2] = int(round(float(data[0]))) # rotation
            
            
            
            win32api.SetCursorPos((int(round(coordinates[0])), int(round(coordinates[1]))))
        except:
            crashes += 1
            print(crashes)
        #print("kattepus")
    return

main()
