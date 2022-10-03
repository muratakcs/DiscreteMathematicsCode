import random
def play():
    box = [10,10]
    
    while True:
        sb = random.randrange(2)
        stat[sb]+=1
        if box[sb] == 0:
            return box[1-sb]
        else:
            box[sb] -= 1
        

num_trials = 10000000
count = [0,0,0,0,0,0,0,0,0,0,0]
stat = [0,0]
for i in range(num_trials):
    count[play()]+=1

print(stat,count, num_trials, count[5]/num_trials)

