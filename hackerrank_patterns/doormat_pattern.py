n, m = input().split()
# print(n)
# print(m)
row = int(n)
column =int(m)
center_line = row//2 + 1

for i in range(1, row + 1):
    if i == center_line:
        for j in range((column - 7)//2):
            print("-", end="")
        print("WELCOME", end="")
        for j in range((column - 7)//2):
            print("-", end="")
    elif i < center_line:
        for j in range((center_line - i) * 3):
            print("-", end="")
        for j in range(i*2 -1):
            print(".|.", end="")
        for j in range((center_line - i) * 3):
            print("-", end="")
    elif i > center_line:
        for j in range((i - center_line) * 3):
            print("-", end="")
        for j in range(((i - ((i - center_line)*2)) * 2) - 1):
            print(".|.", end="")
        for j in range((i - center_line) * 3):
            print("-", end="")
        
    print()

#output

    # Size: 7 x 21 
    # ---------.|.---------
    # ------.|..|..|.------
    # ---.|..|..|..|..|.---
    # -------WELCOME-------
    # ---.|..|..|..|..|.---
    # ------.|..|..|.------
    # ---------.|.---------
    
    # Size: 11 x 33
    # ---------------.|.---------------
    # ------------.|..|..|.------------
    # ---------.|..|..|..|..|.---------
    # ------.|..|..|..|..|..|..|.------
    # ---.|..|..|..|..|..|..|..|..|.---
    # -------------WELCOME-------------
    # ---.|..|..|..|..|..|..|..|..|.---
    # ------.|..|..|..|..|..|..|.------
    # ---------.|..|..|..|..|.---------
    # ------------.|..|..|.------------
    # ---------------.|.---------------