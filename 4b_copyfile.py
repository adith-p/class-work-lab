with open("input1.txt") as file1:
    with open("input2.txt","a") as file2:
        for line in file1:
            file2.write(line)




