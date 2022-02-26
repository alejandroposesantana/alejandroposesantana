# calculator of factorial
# n! = n * (n-1)* (n-2)* ... * 3 *2 * 1

def main(): 
    msg = int(input("Number:" ))
    result = 1
    count = 1

    while count <= msg: 
        #result = result * count old value * count
        result *= count
        count += 1
        # count = count + 1 > add one
    print("Factorial of %d = " %msg, result)
    
main()
