from random import randint
def Status():
    global health
    global zom_health
    print ('Player health=','[',health,'/',max_health,']')
    if zom_health>0:
        print ("Zombie health=",zom_health)
def Attack():
    global zom_health
    global health
    global max_health
    a=randint(1,5)
    if zom_health>0:
        if a>3:
            x=randint(1,5)
            print (name,"attacked on the zombie with his sword.")
            print ("Zombie lost",x,"HP(s).")
            print (name,"defended the zombie's attack.")
            zom_health=zom_health - x
            if zom_health<=0:
                print ("zombie is dead...")
                print (name,"gains HP advantage by 1.")
                zom_health=0
                health+=1
                max_health+=1
        else:
            z=randint(1,5)
            print (name,"attacked on the zombie with his sword.")
            print("zombie defended the attack and attacked in return.")
            print (name,"losts",z,"HP(s).")
            health-=z
    else:
        print (name,"swinged his sword in the air without motive.")
        print (name,"got tired.")
        health-=1
def Help():
    print ("Controls:-[Help,Status,Flee,Attack,Explore,Rest]")
def Flee():
    global zom_health
    global health
    if zom_health>0:
        if randint(1,2)==1:
            print (name,"fleed from the zombie.")
            zom_health=0
        else:
            x=randint(1,5)
            print ("Cannot flee.")
            print("The zombie attacked.")
            print (name,"losed",x,"HP(s).")
            health-=x
    else:
        print("There's no one to flee from.")
def Explore():
    global zom_health
    global health
    if zom_health==0:
        print (name,"ran through curvy paths and reached to a new area.")
        if (randint(1,5)%2)==0:
            x=randint(1,5)
            zom_health=randint(1,8)
            print ("A zombie came out of a dark patch of dense trees.")
            print ("It attacked on you.Kill it or it will kill you.")
            print (name,"losed",x,"HP(s).")
            health-=x
        else:
            print (name,"did not found anything.")
    else:
        x=randint(1,5)
        print ("Cannot leave battleground in between the fight.")
        print("The zombie attacked.")
        print (name,"losed",x,"HP(s).")
        health-=x
def Rest():
    global health,max_health,zom_health
    if zom_health==0:
        if max_health-health>5:
            print (name,"slept for a while.")
            health+=randint(1,5)
        elif max_health-health==4:
            print (name,"slept for a while.")
            health+=randint(1,4)
        elif max_health-health==3:
            print (name,"slept for a while.")
            health+=randint(1,3)
        elif max_health-health==2:
            print (name,"slept for a while.")
            health+=randint(1,2)
        elif max_health-health==1:
            print (name,"slept for a while.")
            health+=1
        else:
            print (name,"tried to sleep but cannot rest.")
        if randint(1,3)==1:
            print (name,"woke by a rude attack of a zombie.")
            zom_health=randint(1,5)
    else:
        print(name,"cannot sleep in the battleground.")
        x=randint(1,5)
        print("The zombie attacked.")
        print (name,"losed",x,"HP(s).")
        health-=x
def RPG():
    global games,name,max_health,health,zom_health
    games="YES"
    while games.startswith("Y"):
        name=input("Enter your character's name: ")
        print ("Hello there! I am ",name+". I'll be your avatar in this virtual world.")
        print ("Lets Start!!!")
        print ("[For the list of controls type 'Help']")
        max_health=10
        health=10
        zom_health=0
        print (name,"is in a dense forest.")
        while (health>0):
            a=input("Enter your action.")
            b=a.upper()
            if b.startswith("A"):
                Attack()
            elif b.startswith("E"):
                Explore()
            elif b.startswith("F"):
                Flee()
            elif b.startswith("H"):
                Help()
            elif b.startswith("R"):
                Rest()
            elif b.startswith("S"):
                Status()
            else:
                print (name,"didn't understand what you asked him to do just now.") 
        print ("R.I.P")
        print ("Game over...")
        games=((input("Wannna play again:[yes,no]")).startswith()).upper()
        print ("================================== RESTART ==================================")
