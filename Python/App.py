import math
def getDay(k,m,c,d):
  k = int(k)
  m = int(m)
  c = int(c)
  d = int(d)
  if m >= 3:
    m = m - 2
  else:
    m = m + 10
  print("\nResult: \n")
  list = ["Sunday","Monday", "Tuesday" , "Wednesday" , "Thursday" ,"Friday", "Saturday"]
  f = k + int(math.floor((13*m-1)/5)) + int(math.floor(d/4)) + d + int(math.floor(c/4)) - 2*c
  print("\nIt was %s on %s\n"%(list[f%7],date))

date = input("\nEnter the date : ( DD-MM-YYYY or DD/MM/YYYY or DD.MM.YYYY )\n")
day = getDay(date[0:2],date[3:5],date[6:8],date[8:10])