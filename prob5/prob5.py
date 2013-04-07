#-------------------------------------------------------------------------------
# Name:        module1
# Purpose:
#
# Author:      teerapol.watanavekin
#
# Created:     20/08/2012
# Copyright:   (c) teerapol.watanavekin 2012
# Licence:     <your licence>
#-------------------------------------------------------------------------------

import functools

def gcd(a,b):
    while b:
        a,b =b,a%b
    return a

def lcm(a,b):
    return a*b // gcd(a,b)

def lcmm(*args):
    return functools.reduce(lcm,args)

def main():
    print(lcmm(*range(1,21)))

if __name__ == '__main__':
    main()
