The purpose of Abstract classes are to be inherited. 

The diamond is aggregation or 

Inheritance is a clear arrow

Realisation is a dotted line with a clear arrow (Interface)

Pure virtual methods, means that the methods are declared but there is no implementation. 
e.g
virtual withdraw(double a) = 0;

The difference between Virtual and pure virtual means that all children are forced to make their own impleementation.
Whereas Virtual the parent can write its own implementation and it can be overwritten by the child. 
e.g
virtual withdraw(double a);


In order for a class to become abstrsact it needs atleast one pure virtual method, that means the class can not be 
instantiated. 


