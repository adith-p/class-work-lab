class Py_pow:
    def __init__(self) -> None:
        pass

    def pos(self,x: int, n:int):
        if n == 1:
            return x
        return x ** n


def main():
    print(Py_pow().pos(5,2))


if __name__ == "__main__":
    main()
