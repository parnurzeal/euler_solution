#-------------------------------------------------------------------------------
# Name:        prob6
# Purpose:
#
# Author:      teerapol.watanavekin
#
# Created:     09/08/2012
# Copyright:   (c) teerapol.watanavekin 2012
# Licence:     <your licence>
#-------------------------------------------------------------------------------




def main():
    sum_of_square = 0
    square_of_sum = 0
    for i in range(1,101):
        print(i,end='')
        sum_of_square += i*i
        square_of_sum +=i
    print(square_of_sum)
    print(square_of_sum*square_of_sum - sum_of_square)


    pass

if __name__ == '__main__':
    main()
