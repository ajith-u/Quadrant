x=int(input())
if(-1000<=x<=1000 and x!=0):
  y=int(input())
  if(-1000<=y<=1000 and y!=0):
    if(0<x and 0<y):
      print(1)
    elif(x<0 and 0<y):
      print(2)
    elif(x<0 and y<0):
      print(3)
    else:
      print(4)