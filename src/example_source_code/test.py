# TO CHECK: Remove whitespaces at the end of line
# TO CHECK: After new line, only token or tab (if tab, check that makes sense). Only valid if line split
# TO CHECK: Line split (only if line ends with \ character, then join with next)
# TO CHECK: Whitespaces without code meaning to be removed

def print_version() :
	print( "Calculator version v1.0")    


"""_summary_

Raises:
	ValueError: _description_
"""
class Calculator:
	def __init__(self):
		self.curr_value = \
		 0 \
		+ 0

	def sum(self, other):
		self.curr_value+=other  # Inline comment
		
	def product(self, other):
		self.curr_value *=other
		
	def print(self):
		print(f"Current value {self.curr_value  }")

	@staticmethod
	def print_version():
		print_version()



calc= Calculator()
calc.print_version()
print_version()

calc.sum(5)
if calc.curr_value==5:
	calc.sum(-2)
else:
	raise ValueError("Something whent wrong" )
	
for i in [1, 2, 1/3]:
	calc.product(i)
	
while(calc.curr_value < 10):
	for i in [1, 2]:
		calc.sum(i)
		
calc.print()