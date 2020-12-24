import math,termcolor

class Point:
    def __init__(self,x,y):
        self.x =float("{:0.2f}".format(x))
        self.y=float("{:0.2f}".format(y))
    def ret_point(self):
        return (self.x,self.y)
    def __str__ (self):
        return f" point ({self.x},{self.y})"
class Parallelopiped:
    def __init__(self,top_left_x,top_left_y,xside,yside,top_left_angle):
        self.top_left_corner_angle = top_left_angle
        self.xside = xside
        self.yside = yside
        self.top_left_corner = Point(top_left_x,top_left_y)
        self.top_right_corner = Point(top_left_x+xside,top_left_y)
        self.bottom_left_corner = Point(yside*math.sin(math.pi*(90-top_left_angle)/180.0),-yside*math.cos(math.pi*(90-top_left_angle)/180.0))
        self.bottom_right_corner = Point(yside*math.sin(math.pi*(90-top_left_angle)/180.0)+xside,-yside*math.cos(math.pi*(90-top_left_angle)/180.0))

    def introduce(self):
        termcolor.cprint( f"This is a parallelepiped:\nTop left corner is {self.top_left_corner.ret_point()}\nThe sides are {self.xside} and {self.yside}\nAngle is {self.top_left_corner_angle} degrees","green")
    def __str__ (self):
        return f"A parallelepiped of points {self.top_left_corner.ret_point()},{self.top_right_corner.ret_point()},{self.bottom_left_corner.ret_point()} and {self.bottom_right_corner.ret_point()} "
class Square(Parallelopiped):
    def __init__(self,x_top_left,y_top_left,side=148):

        self.side = side;
        self.top_left_corner = Point(x_top_left,y_top_left)
        self.bottom_left_corner = Point(x_top_left,y_top_left+side)
        self.top_right_corner = Point(x_top_left+side,y_top_left)
        self.bottom_right_corner = Point(x_top_left+side,y_top_left+side)
    def introduce(self):
        termcolor.cprint( f"This is a square:\nTop left corner is {self.top_left_corner.ret_point()}\nThe sides are {self.side} \n","green")

if __name__ == "__main__":
    ABCD = Parallelopiped(0, 0, 5, 2, 75)
    ABCD.introduce()
    print("\n\n________________________________subclass__________________________\n")
    square = Square(0,0)
    square.introduce()
    # print(ABCD.bottom_left_corner,ABCD.bottom_right_corner.ret_point())
