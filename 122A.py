def check(x):
  c=x
  f=0
  while(c!=0):
    if c%10==4 or c%10==7:
      c//=10
    else:
      f=1
      break
  if f==1:
    return 0
  else:
    return 1

s=input()
flag=1
for i in range(int(s)+1):
  if i==0 or i==1:
    continue
  if(int(s)%i==0):
    if(check(i)==1):
      flag=0
      break
        
if flag==0:
  print("YES")
else:
  print("NO")
