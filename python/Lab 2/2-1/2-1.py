############################
# Module: ICT1002          #
# Language: Python2        #
# Lab Exercise 2-1         #
# Done By: bitxer          #
############################

def main(args):
    args = args.lower()
    unique = set(args)
    
    count = {}
    for i in unique:
        icount = args.count(i)
        if icount not in count.keys():
            count[icount] = []
        count[icount].append(i)
    
    clist = list(count.keys())
    clist.sort(reverse=True)
    prints = []
    for i in clist[:5]:
        count[i].sort()
        prints.append(','.join(':'.join(str(j) for j in (str(x), i)) for x in count[i]))
    prints = ','.join(x for x in prints)
    prints = prints.split(',')
    print(','.join(x for x in prints[:5]))

if __name__ == '__main__':
    import sys
    if len(sys.argv) == 2:
        main(sys.argv[1])
    else:
        print('Invalid argument count')