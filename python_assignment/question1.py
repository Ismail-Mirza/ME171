import termcolor
import sys
def input_tuple(mystr):
    b = input(mystr)

    if "(" not in b and ")" not in b:
        print("Point not entered.")
        sys.quit()
    b = b[1:len(b)-1].split(",")
    b = tuple( float(i) for i in b )
    return b
def distance(a,b):
    return ((a[1]-b[1])**2+(a[0]-b[0])**2)**.5
def half_perimeter(a,b,c):
    return (a+b+c)/2
def triangle_area(cor_a,cor_b,cor_c):
    ab = distance(cor_a,cor_b)
    ac = distance(cor_a,cor_c)
    bc =distance(cor_b,cor_c)
    s = half_perimeter(ab,bc,ac)
    return (s*(s-ab)*(s-bc)*(s-ac))**.5 #using heron law


def solve():
    a = (0,0)
    try:
        b = input_tuple("B:")
        c = input_tuple("C:")
        p = input_tuple("P:")
    except:
        print("Type error in input")
    # print(distance(b,c))
    area_abc = triangle_area(a,b,c)
    area_pab =triangle_area(p,a,b)
    area_pac =triangle_area(p,a,c)
    area_pbc =triangle_area(p,b,c)
    big_triangle=float("{:0.2f}".format(area_abc))
    sum_small_triangle = float("{:0.2f}".format(area_pab+area_pbc+area_pac))

    if big_triangle==sum_small_triangle:
        termcolor.cprint("\n\nInside the rectangle","green")
    else:
        termcolor.cprint("Outside the rectangle","red")

if __name__=="__main__":
    solve()
