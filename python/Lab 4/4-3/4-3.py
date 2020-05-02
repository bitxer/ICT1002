############################
# Module: ICT1002          #
# Language: Python2        #
# Lab Exercise 4-3         #
# Done By: bitxer          #
############################

import sys
def iselfish(x, elf=['e', 'l', 'f']):
    if x and elf:
        elf.remove(x[0]) if x[0] in elf else elf
        return iselfish(x[1:], elf=elf)
    else:
        return not elf

def main():
    args = sys.argv[1]
    if iselfish(args):
        print('{} is one elfish word!'.format(args))
    else:
        print('{} is not an elfish word!'.format(args))

if __name__ == '__main__':
    main()