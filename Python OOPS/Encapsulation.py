class computer:
	def __init__(self):
		# double underscore is for private members!
		self.__maxprice=900
		self.price=500
		
	def sell(self):
		print("price :{p} maxprice:{mp}\n".format(p=self.price,mp=self.__maxprice))
		
	def setMaxPrice(self,price):
		self.__maxprice=price

c = computer()
# printing the initial price!
c.sell()
# changing the price!
c.maxprice=1000
c.price=600
# printing the price after changing values!
c.sell()
# using method to changing the value!
c.setMaxPrice(1000)
c.sell()

