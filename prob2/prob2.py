#-------------------------------------------------------------------------------
# Name:        prob2
# Purpose:
#
# Author:      teerapol.watanavekin
#
# Created:     09/08/2012
# Copyright:   (c) teerapol.watanavekin 2012
# Licence:     <your licence>
#-------------------------------------------------------------------------------


def fibonacci(number):
    if number==0:
        return 1
    elif number==1:
        return 1
    return fibonacci(number-1)+fibonacci(number-2)

def main():
    number,before=0,0
    answer = fibonacci(number)
    while answer<4000000:
        if(answer%2==0):
            before+= answer
        number+=1
        answer = fibonacci(number)
    print(before)


if __name__ == '__main__':
    main()
