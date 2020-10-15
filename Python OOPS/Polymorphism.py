class parrot:
	def fly(self):
		print("parrot can fly\n")

	def swim(self):
		print("parrot can't swim\n")

class pengiun:
	def fly(self):
		print("pengiun can't fly\n")

	def swim(self):
		print("pengiun can swim\n")

# Common interface!
def flying_test(bird):
	bird.fly()
	bird.swim()

# instantiate objects!

blu=parrot()
peggy=pengiun()

# passing the objects

flying_test(blu)
flying_test(peggy)
