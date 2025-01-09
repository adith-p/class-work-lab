class Fib:
    def __init__(self):
        pass

    def fib(self, n):
        n1 = 0
        n2 = 1
        print(n1)
        print(n2)
        for _ in range(2,n):
            n3 = n1 + n2
            n1,n2 = n2,n3
            print(n3)

    def revrse(self, sentance: str):
        words = sentance.split()
        print(words[::-1])


def main():
    fib = Fib()

    fib.fib(5)
    fib.revrse("hello world how are you doing")

if __name__ == "__main__":
    main()
    
            
