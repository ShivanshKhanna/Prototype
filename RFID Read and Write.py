##sudo apt install python3-dev python3-pip, Install first library, allows extra functionality which is not supplied by python originally

#sudo pip3 install spidev, previous step is important for downloading the spidev library which is the interaction through SPI communcation hence the RFID

##sudo pip3 install mfrc522, last the RFID library is imported in-order to achieve processes towards the RFID, important for defining data blocks, buffer
## and reading and writing to a RFID tag. 
 
 ##mkdir ~/pi-rfid, new folder is created, of which is duplicated to hold read and write files allowing either function to be called
 
 ##cd ~/pi-rfid
##sudo nano Write.py  //Directory is changed to this folder and code can be written inside the write folder and similarly the read folder.


##Write

import RPi.GPIO as GPIO
from mfrc522 import SimpleMFRC522

reader = SimpleMFRC522()

try:
        text = input('New data:')
        print("Now place your tag to write")
        reader.write(text)
        print("Written")
finally:
        GPIO.cleanup()
        
##Read

#!/usr/bin/env python

import RPi.GPIO as GPIO
from mfrc522 import SimpleMFRC522

reader = SimpleMFRC522()

try:
        id, text = reader.read()
        print(id)
        print(text)
finally:
        GPIO.cleanup()
        
Folders can then be called to fufil their purpose of reading and writing a card. 
