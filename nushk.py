import serial  
import win32com.client as comclt  
    
wsh = comclt.Dispatch("WScript.Shell")  
wsh.AppActivate("notepad")  #vai para o programa selecionado  
ser = serial.Serial('COM3', 115200, timeout=1)  
   
while 1: #loop infinito para sempre ler a po  
     data = ser.readline().decode().strip('\r\n') # remove lixo da porta e guarda a informação recebida em data  
     if data == 'w':  
       wsh.SendKeys("w")  
     if data == 's':  
       wsh.SendKeys("s")  
     if data == 'a':  
       wsh.SendKeys("a")  
     if data == 'd':   
       wsh.SendKeys("d")  
