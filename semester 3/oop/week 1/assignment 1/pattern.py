import pyautogui

n = int(input())

for i in range(n):
    for j in range(i + 1):
        pyautogui.write("#", interval=0.5)
    
    pyautogui.press('enter')

