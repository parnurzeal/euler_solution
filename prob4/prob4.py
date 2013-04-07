#-------------------------------------------------------------------------------
# Name:        prob4
# Purpose:
#
# Author:      teerapol.watanavekin
#
# Created:     23/08/2012
# Copyright:   (c) teerapol.watanavekin 2012
# Licence:     <your licence>
#-------------------------------------------------------------------------------
import copy

def checkPalindrome(number):
    normal = str(number)
    reverse = normal[::-1]
    if(normal==reverse):
        return True
    return False


def main():

    a = [i for i in range(1,1000)]
    a =a[::-1]
    max = 0
    for i in a:
        for j in a:
            sum = i*j
            if(checkPalindrome(sum)):
                if(max==0):
                    max = sum
                elif(max<sum):
                    max = sum

    print(max,end=' ')

    """
    aTurn = True

        i = a*b
        if(checkPalindrome(i)):
            print(i)
            break
        if(aTurn):
            a-=1
            aTurn = not aTurn
        else:
            b-=1
            aTurn = not aTurn
            """
    pass

if __name__ == '__main__':
    main()
