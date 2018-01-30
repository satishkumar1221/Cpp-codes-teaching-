#! /usr/bin/python
#Filename :mymodule.py

def hello():
 print('hello world');
def  loop():
 print("loop in python");
 for i in range(1,5):
   print i;
def printmax(a,b):
    if(a>b):
        print a,'is max'
    else:
        print b,'is max'
def returninpy(a,b):
    if(a>b):
        return a;
    else:
        return b;
def shop(shoplist):
    print 'I have',len(shoplist),'fruits';
    for items in shoplist :
        print items;
def tupleani(animals):
    for ani in animals :
        print animals;
def dictionary(ab):
    for name,address in ab.items():
        print (name,address);
def slicelist(shoplist):
    print shoplist[1:3]
#end mymodule.py
hello();
loop();
print returninpy(3,5);
printmax(4,6);
#lists in the python
print "lists in pyton"
shoplist = ['apple','mango','banana','orange'];
shop(shoplist);
#slicing the list
slicelist(shoplist)
#tuples cannot be modified// #
    #tuples are denoted by () and tuple with tuple doesnot lose identity
animals = ('wolf','tiger','lion')
tupleani(animals)
#dictionary is like a key value pair#
  #usally denoted with {}
ab = {'pop' : 'popthis@myinfo.com ',
        'larry':'larrypage@google.com'}
 # add a key value pair
ab['satish'] = 'satishkumar1221@gmail.com'
 #for deleting use del[key]
dictionary(ab)
