#-------------------------------------------------------------------------------
# Name:        prob3
# Purpose:
#
# Author:      teerapol.watanavekin
#
# Created:     20/08/2012
# Copyright:   (c) teerapol.watanavekin 2012
# Licence:     <your licence>
#-------------------------------------------------------------------------------

import math
import itertools

def find_square_free_list(number,limit):
    answer = []
    sqr_number = number*number
    k = sqr_number
    i=1
    while(k<=limit):
        answer.append(k)
        k = i*sqr_number
        i+=1
    return answer

def find_all_prime(limit):

    prime_list = [False for i in range(limit)]
    sqrt_limit = math.ceil(math.sqrt(limit))
    all_number_list = range(1,sqrt_limit)
    for (x,y) in itertools.product(all_number_list,all_number_list):
        n = 4*(x*x) + y*y
        if (n<=limit) and (n % 12 == 1 or n % 12 ==5):
            prime_list[n] = not prime_list[n]

        n = 3*(x*x) + y*y
        if (n<=limit) and (n % 12 ==7):
            prime_list[n] = not prime_list[n]

        n = 3*(x*x) - (y*y)
        if (x > y ) and (n <= limit) and (n % 12 ==11):
            prime_list[n] = not prime_list[n]

    for n in range(5,sqrt_limit):
        if prime_list[n]:
            square_free_list = find_square_free_list(n,limit)
            if n in square_free_list:
                prime_list[n] = false

    answer = [2,3]

    for n in range(5,limit):
        if prime_list[n] and ( n%5!=0) and (n%2!=0) and (n%3!=0):
            answer.append(n)
    return answer

def main():

    big_number = 600851475143
    largest_prime=7
    i =7
    while big_number!=1:
        if(big_number%i==0):
            big_number/=i
            largest_prime=i
        else:
            i+=1
    print(largest_prime)

    pass

if __name__ == '__main__':
    main()
