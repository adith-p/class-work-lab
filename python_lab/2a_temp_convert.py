def convert_f(temp) -> float:
    return (temp - 32) * 5/9

def convert_c(temp) -> float:
    return (temp * 9 / 5) + 32

def main():
    temp_type = input("enter the convertion fahrneheit(F) and Celsius (C):   ")
    
    temp = float(input(" enter the temp "))

    if temp_type.lower() == "c":
        print(f"fahrenehit to celsius: = {convert_c(temp):.2f} *C")
    else:
        print(f" Celsius to fahrenehit {convert_f(temp):.2f} *f")



if __name__ == "__main__":
    main()

    
