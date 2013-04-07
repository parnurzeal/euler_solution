#-------------------------------------------------------testRope------------------------
# Name:        module1
# Purpose:
#
# Author:      teerapol.watanavekin
#
# Created:     08/08/2012
# Copyright:   (c) teerapol.watanavekin 2012
# Licence:     <your licence>
#-------------------------------------------------------------------------------

def traingle_number(number):
  sum = number*(number+1)/2
  return sum

def main():
  sum = traingle_number(7)
  print(sum)
  pass

if __name__ == '__main__':
  main()
