
file1 = input("enter the file a")
file2 = input("enter the file b")


with open(file1) as file1:
    with open(file2,"a") as file2:
        for line in file1:
            file2.write(line)


print(" Copy pasting done ")


