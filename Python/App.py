import math

def dayOfWeek(d,m,y):
  list = [0,3,2,5,0,3,5,1,4,6,2,4]
  if m < 3:
    y = y - 1
  return ( y + y/4 - y/100 + y/400 + list[m-1] + d ) % 7
def getDay(d,m,y):
  d = int(d)
  m = int(m)
  y = int(y)
  index = int(dayOfWeek(d,m,y))
  print("\nResult: \n")
  list = ["Sunday","Monday", "Tuesday" , "Wednesday" , "Thursday" ,"Friday", "Saturday"]
  print("\nIt was %s on %s\n"%(list[index],date))

date = input("\nEnter the date : ( DD-MM-YYYY or DD/MM/YYYY or DD.MM.YYYY )\n")
day = getDay(date[0:2],date[3:5],date[6:])