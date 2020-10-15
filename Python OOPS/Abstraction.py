from abc import ABC 
class shape(ABC):
	def calculate_area(self):
		# abstract method
		pass
class rectangle(shape):
	length=5
	breadth=3
	# abstract method is defined here!
	def calculate_area(self):
		return self.length*self.breadth

class circle(shape):
	radius=4
	def calculate_area(self):
		return 3.14*self.radius*self.radius

rec=rectangle()
cir=circle()
print(rec.calculate_area())
print(cir.calculate_area())
# objects cannot be created to abstract classes!
