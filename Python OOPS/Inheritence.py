class bird:
	# parent class
	def __init__(self):
		print("Bird is ready!")

	def whoisthis(self):
		print("bird")

	def swim(self):
		print("swim faster")


class pengiun(bird):
	# child class
	def __init__(self):
		print("pengiun is ready!")
		super().__init__()

	def whoisthis(self):
		print("pengiun")

	def run(self):
		print("Run faster")

peggy=pengiun()
peggy.whoisthis()
peggy.swim()
peggy.run()



