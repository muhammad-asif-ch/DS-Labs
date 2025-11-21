import heepq

class PriorityQueue:
    def __init__(self):
        # each entry is a tuple (priority, task)
        self.queue=[]

def add_task(self,priority, task):
    heapq.heappush(self.queue, (priority,task))
    print(f"added {task} with priority {priority}")
    
def serve_task(self):
        """Pop the highest-priority task (lowest number)."""
        if self.queue:
            priority, task = heapq.heappop(self.queue)
            print(f"Serving '{task}' (priority {priority})")
            return task
        else:
            print("No tasks left!")
            return None
def show(self):
    print("Current tasks:", self.queue)

pq = PriorityQueue()
pq.add_task(3, "Normal Customer")
pq.add_task(1, "VIP Customer")
pq.add_task(2, "Senior Citizen")

pq.show()
pq.serve_task()
pq.show()