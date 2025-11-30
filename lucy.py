class MyNeighbour:
    def _init_(self):
        self.name = ""
        self.hobby = ""
        self.status = 0
        self.religion= ""
        

neighbour = MyNeighbour()

neighbour.name = "stacy kadzo"
neighbour.hobby = "drawing"
neighbour.status = "single"
neighbour.religion = "christian"


print(f"{neighbour.name} loves {neighbour.hobby}")
print(f"{neighbour.name} is {neighbour.status}")
print(f"{neighbour.name} is a {neighbour.religion}")
