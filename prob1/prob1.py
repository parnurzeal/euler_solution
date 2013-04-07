#-------------------------------------------------------------------------------
# Name:        module1
# Purpose:
#
# Author:      teerapol.watanavekin
#
# Created:     08/08/2012
# Copyright:   (c) teerapol.watanavekin 2012
# Licence:     <your licence>
#-------------------------------------------------------------------------------

def main():
    sum=0
    for i in range(0,1000):
        if(i%3==0 or i%5 ==0):
            sum+=i
    print(sum)

    pass

if __name__ == '__main__':
    main()
