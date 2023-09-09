def print_rangoli(size):
    n = 96+size
    row = (2 * size) -1
    column = (2 * row) - 1
    center_line = size
    for i in range(1, row+1):
        if i < center_line:
            for j in range((column//2) - (2*(i-1))):
                print("-", end="")
            ch = (2 * i) -1
            count = 0
            for j in range(ch):
                print(chr(n - count), end="")
                count = count+1 if j < ch // 2 else count-1
                if  j != ch -1:
                    print("-", end="")
            for j in range((column//2) - (2*(i-1))):
                print("-", end="")
        elif i == center_line:
            ch = (column//2) + 1
            count = 0
            for j in range(ch):
                print(chr(n - count), end="")
                count = count+1 if j < ch // 2 else count-1
                if  j != ch -1:
                    print("-", end="")
        else:
            for j in range(((i - center_line)*2)):
                print("-", end="")
            ch = (((i - ((i - center_line)*2)) * 2) - 1)
            count = 0
            for j in range(ch):
                print(chr(n - count), end="")
                count = count+1 if j < ch // 2 else count-1
                if  j != ch -1:
                    print("-", end="")
            for j in range(((i - center_line)*2)):
                print("-", end="")
            

        print()
    
    
if __name__ == '__main__':
    n = int(input())
    print_rangoli(n)



# sample

#size 3

# ----c----
# --c-b-c--
# c-b-a-b-c
# --c-b-c--
# ----c----

#size 5

# --------e--------
# ------e-d-e------
# ----e-d-c-d-e----
# --e-d-c-b-c-d-e--
# e-d-c-b-a-b-c-d-e
# --e-d-c-b-c-d-e--
# ----e-d-c-d-e----
# ------e-d-e------
# --------e--------

#size 10

# ------------------j------------------
# ----------------j-i-j----------------
# --------------j-i-h-i-j--------------
# ------------j-i-h-g-h-i-j------------
# ----------j-i-h-g-f-g-h-i-j----------
# --------j-i-h-g-f-e-f-g-h-i-j--------
# ------j-i-h-g-f-e-d-e-f-g-h-i-j------
# ----j-i-h-g-f-e-d-c-d-e-f-g-h-i-j----
# --j-i-h-g-f-e-d-c-b-c-d-e-f-g-h-i-j--
# j-i-h-g-f-e-d-c-b-a-b-c-d-e-f-g-h-i-j
# --j-i-h-g-f-e-d-c-b-c-d-e-f-g-h-i-j--
# ----j-i-h-g-f-e-d-c-d-e-f-g-h-i-j----
# ------j-i-h-g-f-e-d-e-f-g-h-i-j------
# --------j-i-h-g-f-e-f-g-h-i-j--------
# ----------j-i-h-g-f-g-h-i-j----------
# ------------j-i-h-g-h-i-j------------
# --------------j-i-h-i-j--------------
# ----------------j-i-j----------------
# ------------------j------------------